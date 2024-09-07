#include <bits/stdc++.h>
using namespace std;

int board[1001][1001];
int dist[1001][1001][2];
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
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = s[j] - '0';
            dist[i][j][0] = -1;
            dist[i][j][1] = -1;
        }
    }

    queue<tuple<int, int, int>> q;
    dist[0][0][1] = 0;
    q.push(make_tuple(0, 0, 1));

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        if(get<0>(cur) == n-1 && get<1>(cur) == m-1)
        {
            cout << dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            return 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = get<0>(cur) + dx[i];
            int ny = get<1>(cur) + dy[i];
            int flag = get<2>(cur);

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (!flag)
            {
                if ((board[nx][ny] || dist[nx][ny][0] >= 0 || dist[nx][ny][1] >= 0))
                    continue;
                dist[nx][ny][0] = dist[get<0>(cur)][get<1>(cur)][0] + 1;
                q.push(make_tuple(nx, ny, 0));
            }
            else
            {
                if (board[nx][ny] == 0 && dist[nx][ny][1] == -1)
                {
                    dist[nx][ny][1] = dist[get<0>(cur)][get<1>(cur)][1] + 1;
                    q.push(make_tuple(nx, ny, 1));
                }

                if (board[nx][ny] == 1 && dist[nx][ny][0] == -1)
                {
                    dist[nx][ny][0] = dist[get<0>(cur)][get<1>(cur)][1] + 1;
                    q.push(make_tuple(nx, ny, 0));
                }
            }
        }
    }
    cout << -1;
}