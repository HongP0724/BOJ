#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(3);
    double a, b, c, d, e, f, g, h;
    while (!(cin >> a).eof())
    {
        cin >> b >> c >> d >> e >> f >> g >> h;
        if (a == e && b == f)
            cout << g + c - a << " " << h + d - b << "\n";
        else if (a == g && b == h)
        {
            cout << e + c - a << " " << f + d - b << "\n";
        }
        else if (c == e && d == f)
        {
            cout << g + a - c << " " << h + b - d << "\n";
        }
        else if (c == g && d == h)
        {
            cout << e + a - c << " " << f + b - d << "\n";
        }
    }
}