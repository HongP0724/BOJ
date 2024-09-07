#include <bits/stdc++.h>
using namespace std;

int board[26][26];
int vis[26][26];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = s[j] -  '0';
        }
    }

    queue<pair<int, int>> q;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] && !vis[i][j])
            {
                ans++;
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
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (!board[nx][ny] || vis[nx][ny])
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
    cout << ans << '\n';
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << '\n';
    }
}
