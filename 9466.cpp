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
                if (vis[start] != -1)   //이미 방문했던적이 있는 노드를 방문
                {
                    int end = start;
                    int start = i;
                    while (start != end)
                    {
                        ans++;
                        start = board[start];
                    }
                    break;
                }
                else if (vis[start] == i)
                {
                    if (start == i) // 맨처음 시작한 점이 사이클 내부에 있음
                        break;
                    else // 맨처음 시작한 점이 사이클 외부에 있음
                    {
                        int cycle_start = start;
                        int start = i;
                        while (start != cycle_start)
                        {
                            ans++;
                            start = board[start];
                        }
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