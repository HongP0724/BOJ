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

    int n, m, k;
    cin >> n >> m >> k;

    while (k--)
    {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
            {
                board[i][j] = 1;
            }
        }
    }

    vector<int> v;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!board[i][j] && !vis[i][j])
            {
                int area = 0;
                vis[i][j] = 1;
                q.push(make_pair(i, j));
                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    area++;
                    for (int i = 0; i < 4; i++)
                    {
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                            continue;
                        if (board[nx][ny] || vis[nx][ny])
                            continue;
                        vis[nx][ny] = 1;
                        q.push(make_pair(nx, ny));
                    }
                }
                v.push_back(area);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << ' ';
    }
}