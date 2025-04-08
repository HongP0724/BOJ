#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ans = 0;
    string L, R;
    cin >> L >> R;

    if (L.length() != R.length())
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < L.length(); i++)
    {
        if (L[i] != R[i])
            break;
        if (L[i] == '8')
        {
            ans++;
        }
    }
    cout << ans;
}