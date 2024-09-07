#include <bits/stdc++.h>
using namespace std;

int place(int x1, int y1, int x2, int y2, int x, int y)
{
    long long int value = (long long int)(y2 - y1) * (x - x1) + (long long int)(y1 - y) * (x2 - x1);
    if (value > 0)
        return 1;
    else if (value < 0)
        return -1;
    return 0;
}

int solve(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    if (place(x1, y1, x2, y2, x3, y3) * place(x1, y1, x2, y2, x4, y4) <= 0 && place(x3, y3, x4, y4, x1, y1) * place(x3, y3, x4, y4, x2, y2) <= 0)
    {
        if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1))
        {
            if (min(x1, x2) > max(x3, x4) || max(x1, x2) < min(x3, x4) || min(y1, y2) > max(y3, y4) || max(y1, y2) < min(y3, y4))
                return 0;
        }
        return 1;
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cout << solve(x1, y1, x2, y2, x3, y3, x4, y4);
}