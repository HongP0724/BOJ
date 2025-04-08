#include <bits/stdc++.h>
using namespace std;

int num[1005];
int d[1005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (num[j] < num[i])
            {
                temp = max(temp, d[j]);
            }
        }
        d[i] = temp + num[i];
        ans = max(d[i], ans);
    }

    cout << ans;
}