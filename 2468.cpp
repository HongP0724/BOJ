#include <bits/stdc++.h>
using namespace std;

int board[101][101];
int vis[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    int h = -1;
    while (1)
    {
        h++;
        memset(vis, 0, sizeof(vis));
        int area = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] > h && !vis[i][j])
                {
                    area++;
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
                            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                                continue;
                            if (board[nx][ny] <= h || vis[nx][ny])
                                continue;
                            vis[nx][ny] = 1;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
            }
        }
        ans = max(area, ans);
        if (!area)
            break;
    }
    cout << ans;
}