#include <bits/stdc++.h>
using namespace std;
int arr[1002];
int d[1002][31];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, w;
    cin >> t >> w;
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= t; i++)
    {
        d[i][0] = d[i - 1][0] + (arr[i] == 1);
        for (int j = 1; j <= w; j++)
            d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + (arr[i] == j % 2 + 1);
    }
    cout << *max_element(d[t],d[t] + w + 1);
}