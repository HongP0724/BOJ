#include <bits/stdc++.h>
using namespace std;

int board[101][101][101];
int vis[101][101][101];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<tuple<int, int, int>> q;
    int m, n, h, ans, cnt = 0;
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> board[k][i][j];
                vis[k][i][j] = -1;
                if (board[k][i][j] == 1)
                {
                    q.push(make_tuple(k, i, j));
                    vis[k][i][j] = 0;
                }
                else if (!board[k][i][j])
                    cnt++;
            }
        }

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        ans = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)];
        for (int i = 0; i < 6; i++)
        {
            int nx = get<1>(cur) + dx[i];
            int ny = get<2>(cur) + dy[i];
            int nz = get<0>(cur) + dz[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
                continue;
            if (board[nz][nx][ny] == -1 || vis[nz][nx][ny] >= 0)
                continue;
            vis[nz][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            q.push(make_tuple(nz, nx, ny));
            cnt--;
        }
    }
    if (cnt)
        cout << -1;
    else
        cout << ans;
}