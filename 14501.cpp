#include <bits/stdc++.h>
using namespace std;

int d[20];
int arr[20][2];

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
    for (int i = 1; i <= n; i++)
    {
        if (arr[i][0] + i - 1 > n)
            continue;
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (i > j + arr[j][0] - 1)
            {
                temp = max(temp, d[j]);
            }
        }
        d[i] = temp + arr[i][1];
    }

    cout << *max_element(d, d + n + 1);
}