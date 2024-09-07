#include <bits/stdc++.h>
using namespace std;

char board[101][101];
int vis1[101][101];
int vis2[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans1 = 0, ans2 = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = s[j];
        }
    }

    queue<pair<int, int>> q1, q2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis1[i][j])
            {
                vis1[i][j] = 1;
                q1.push(make_pair(i, j));
                ans1++;
                while (!q1.empty())
                {
                    auto cur = q1.front();
                    q1.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (board[nx][ny] != board[cur.first][cur.second] || vis1[nx][ny])
                            continue;
                        vis1[nx][ny] = 1;
                        q1.push(make_pair(nx, ny));
                    }
                }
            }

            if (!vis2[i][j])
            {
                vis2[i][j] = 1;
                q2.push(make_pair(i, j));
                ans2++;
                while (!q2.empty())
                {
                    auto cur = q2.front();
                    q2.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if ((board[nx][ny] != board[cur.first][cur.second] && (board[nx][ny] == 'B' || board[cur.first][cur.second] == 'B')) || vis2[nx][ny])
                            continue;
                        vis2[nx][ny] = 1;
                        q2.push(make_pair(nx, ny));
                    }
                }
            }
        }
    }

    cout << ans1 << ' ' << ans2;
}