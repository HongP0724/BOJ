#include <bits/stdc++.h>
using namespace std;

char board[1001][1001];
int dist1[1001][1001];
int dist2[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> n >> m;
    queue<pair<int, int>> q1, q2;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = s[j];
            dist1[i][j] = -1;
            dist2[i][j] = -1;
        }
    }

    // 불 bfs;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'F')
            {
                dist1[i][j] = 0;
                q1.push(make_pair(i, j));
            }
        }
    }

    while (!q1.empty())
    {
        pair<int, int> cur = q1.front();
        q1.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (board[nx][ny] == '#' || dist1[nx][ny] >= 0)
                continue;

            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            q1.push(make_pair(nx, ny));
        }
    }

    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'J')
            {
                dist2[i][j] = 0;
                q2.push(make_pair(i, j));
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }

    while (!q2.empty())
    {
        pair<int, int> cur = q2.front();
        q2.pop();
        if (cur.first == 0 || cur.first == n - 1 || cur.second == 0 || cur.second == m - 1)
        {
            cout << dist2[cur.first][cur.second] + 1;
            return 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (board[nx][ny] == '#' || dist2[nx][ny] >= 0 || (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.first][cur.second] + 1))
                continue;

            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            q2.push(make_pair(nx, ny));
        }
    }

    cout << "IMPOSSIBLE";
}