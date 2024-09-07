#include <bits/stdc++.h>
using namespace std;

int board[51][51];
int vis[51][51];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }
        int ans = 0;
        cin >> m >> n >> k;
        while (k--)
        {
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] && !vis[i][j])
                {
                    ans++;
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

        cout << ans << '\n';
    }
}