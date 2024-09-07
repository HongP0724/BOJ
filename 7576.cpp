#include <bits/stdc++.h>
using namespace std;

int board[1001][1001];
int vis[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> q;
    int m, n, ans, cnt = 0;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            vis[i][j] = -1;
            if (board[i][j] == 1)
            {
                q.push(make_pair(i, j));
                vis[i][j] = 0;
            }
            else if (!board[i][j])
                cnt++;
        }
    }

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        ans = vis[cur.first][cur.second];
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (board[nx][ny] == -1 || vis[nx][ny] >= 0)
                continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            q.push(make_pair(nx, ny));
            cnt--;
        }
    }
    if (cnt)
        cout << -1;
    else
        cout << ans;
}