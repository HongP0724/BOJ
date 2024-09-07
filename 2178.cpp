#include <bits/stdc++.h>
using namespace std;

int board[101][101];
int vis[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int ans;
    string line;
    queue<pair<int, int>> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> line;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = line[j]-'0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = -1;
        }
    }

    q.push(make_pair(0, 0));
    vis[0][0] = 1;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        if (cur.first == n - 1 && cur.second == m - 1)
        {
            cout << vis[n - 1][m - 1] << '\n';
            return 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (!board[nx][ny] || vis[nx][ny] != -1)
                continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            q.push(make_pair(nx, ny));
        }
    }
}