#include <bits/stdc++.h>
using namespace std;

int d[1000005];
int t[1000005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1];
        t[i] = i - 1;
        if (i % 3 == 0)
        {
            if (d[i / 3] < d[i])
            {
                d[i] = d[i / 3];
                t[i] = i / 3;
            }
        }
        if (i % 2 == 0)
        {
            if (d[i / 2] < d[i])
            {
                d[i] = d[i / 2];
                t[i] = i / 2;
            }
        }
        d[i] += 1;
    }

    cout << d[n] << "\n";
    while (1)
    {
        cout << n << " ";
        if (n == 1)
            break;
        n = t[n];
    }
}