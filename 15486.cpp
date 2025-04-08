#include <bits/stdc++.h>
using namespace std;
int d[1500002];
int arr[1500002][2];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    d[n + 1] = 0;
    for (int i = n; i >= 1; i--)
    {
        if (i + arr[i][0] <= n + 1)
            d[i] = max(d[i + arr[i][0]] + arr[i][1], d[i + 1]);
        else
            d[i] = d[i + 1];
    }
    cout << d[1];
}