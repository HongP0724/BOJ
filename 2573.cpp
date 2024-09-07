#include <bits/stdc++.h>
using namespace std;

int board[301][301];
int ocean[301][301];
int vis[301][301];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    int ans = 0;
    int ice_cnt = 0;
    while (1)
    {
        int ice_cnt = 0;
        queue<pair<int, int>> q;
        ans++;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j])
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                            continue;
                        if (!board[nx][ny])
                        {
                            ocean[i][j]++;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j])
                {
                    board[i][j] = board[i][j] > ocean[i][j] ? board[i][j] - ocean[i][j] : 0;
                    ocean[i][j] = 0;
                    if (board[i][j])
                    {
                        vis[i][j] = 0;
                        ice_cnt++;
                    }
                }
            }
        }
        if (!ice_cnt)
        {
            cout << 0;
            return 0;
        }
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] && !vis[i][j])
                {
                    cnt++;
                    vis[i][j] = 1;
                    q.push(make_pair(i, j));
                    while (!q.empty())
                    {
                        auto cur = q.front();
                        q.pop();
                        for (int i = 0; i < 4; i++)
                        {
                            int nx = cur.first + dx[i];
                            int ny = cur.second + dy[i];
                            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                                continue;
                            if (!board[nx][ny] || vis[nx][ny])
                                continue;
                            vis[nx][ny] = 1;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
            }
        }

        if (cnt >= 2)
        {
            cout << ans;
            return 0;
        }
    }
}