#include <bits/stdc++.h>
using namespace std;

int board[100001];
int vis[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> board[i];
            vis[i] = -1;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int start = i;
            while (1)
            {
                if (vis[start] == i)
                {
                    if (start == i)
                        break;
                    else
                    {
                        ans++;
                        break;
                    }
                }
                vis[start] = i;
                start = board[start];
            }
        }
        cout << ans << '\n';
    }
}