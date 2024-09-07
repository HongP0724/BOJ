#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;

ll recursive_mul(ll a, ll b, ll c)
{
    if (b == 1)
        return a % c;

    ll mul = recursive_mul(a, b / 2, c);
    mul = mul * mul % c;

    if (b % 2 == 0)
        return mul;

    return mul * a % c;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    cout << recursive_mul(a, b, c);
}