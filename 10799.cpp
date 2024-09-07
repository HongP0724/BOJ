#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool flag = 0;
    int ans = 0;
    string st;
    cin >> st;
    stack<char> s;
    for (char c : st)
    {
        if (c == '(')
        {
            s.push(c);
            flag = 1;
        }
        else
        {
            s.pop();
            if (flag)
            {
                ans += s.size();
            }
            else
            {
                ans += 1;
            }
            flag = 0;
        }
    }
    cout << ans;
}