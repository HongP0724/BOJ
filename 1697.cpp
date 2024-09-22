    #include <bits/stdc++.h>
    using namespace std;

    int board[100001];
    int vis[100001];
    int dx[3] = {-1, 1, 0};

    int main(void)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < 100001; i++)
            vis[i] = -1;

        queue<int> q;
        vis[n] = 0;
        q.push(n);
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            if (cur == k)
            {
                cout << vis[cur];   
                return 0;
            }

            for (int i = 0; i < 3; i++)
            {
                int nx = cur + (dx[i] ? dx[i] : cur);
                if (nx < 0 || nx > 100000)
                    continue;
                if (vis[nx] >= 0)
                    continue;
                vis[nx] = vis[cur] + 1;
                q.push(nx);
            }
        }
    }