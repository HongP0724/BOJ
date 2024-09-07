#include <bits/stdc++.h>
using namespace std;

int dist[301][301];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        queue<pair<int, int>> q;
        int l;
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {
                dist[i][j] = -1;
            }
        }
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        dist[a][b] = 0;
        q.push(make_pair(a, b));
        while (!q.empty())
        {
            auto cur = q.front();
            q.pop();
            if(cur.first==x&&cur.second==y)
            {
                cout << dist[cur.first][cur.second] << '\n';
                break;
            }
            for (int i = 0; i < 8; i++)
            {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= l || ny < 0 || ny >= l)
                    continue;
                if (dist[nx][ny] >= 0)
                    continue;
                
                dist[nx][ny] = dist[cur.first][cur.second]+1;
                q.push(make_pair(nx,ny));
            }
        }

    }
}