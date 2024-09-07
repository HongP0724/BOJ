#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

int recursize_z(int n, int r, int c)
{
    if (n == 1)
    {
        return 2 * r + c;
    }
    int half = 1 << n - 1;
    if (r < half && c < half)
        return recursize_z(n - 1, r, c);
    else if (r < half && c >= half)
        return half * half + recursize_z(n - 1, r, c - half);
    else if (r >= half && c < half)
        return 2 * half * half + recursize_z(n - 1, r - half, c);
    else
        return 3 * half * half + recursize_z(n - 1, r - half, c - half);
}
int main(void)
{
    int n, r, c;
    cin >> n >> r >> c;
    cout << recursize_z(n, r, c);
}