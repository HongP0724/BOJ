#include <bits/stdc++.h>
using namespace std;

int vis[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    for (int i = 1; i <= f; i++)
        vis[i] = -1;
    queue<int> q;
    vis[s] = 0;
    q.push(s);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        if (cur == g)
        {
            cout << vis[g];
            return 0;
        }
        for (int nx : {cur + u, cur - d})
        {
            if (nx < 1 || nx > f)
                continue;
            if (vis[nx] >= 0)
                continue;
            vis[nx] = vis[cur] + 1;
            q.push(nx);
        }
    }

    cout << "use the stairs";


}