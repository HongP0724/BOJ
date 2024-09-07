#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;
    double max = a / c + b / d;

    if (c / d + a / b > max)
    {
        ans = 1;
        max = c / d + a / b;
    }
    if (d / b + c / a > max)
    {
        ans = 2;
        max = d / b + c / a;
    }
    if (b / a + d / c > max)
    {
        ans = 3;
        max = b / a + d / c;
    }
    cout << ans;
}