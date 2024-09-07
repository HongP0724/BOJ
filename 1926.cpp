#include <bits/stdc++.h>
using namespace std;
int board[501][501];
int vis[501][501];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    int ans = 0, size = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] || !board[i][j])
                continue;
            int cursize = 0;
            ans++;
            pair<int, int> start = make_pair(i, j);
            vis[i][j] = 1;
            queue<pair<int, int>> q;
            q.push(start);
            while (!q.empty())
            {
                pair<int, int> cur = q.front();
                cursize++;
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m)
                    {
                        if (!vis[nx][ny] && board[nx][ny])
                        {
                            vis[nx][ny] = 1;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
            }
            size = max(size, cursize);
        }
    }
    cout << ans << '\n' <<size;
}