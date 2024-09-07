#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ans = 0, v = 1;
    bool flag = 0;
    string s;
    stack<char> st;
    cin >> s;
    for (char c : s)
    {
        if (c == '(' || c == '[')
        {
            flag = 1;
            st.push(c);
            if (c == '(')
            {
                v *= 2;
            }
            else
            {
                v *= 3;
            }
        }
        else if (c == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
                if (flag)
                {
                    ans += v;
                }
                v /= 2;
                flag = 0;
            }
            else
            {
                cout << 0;
                return 0;
            }
        }
        else if (c == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
                if (flag)
                {
                    ans += v;
                }
                v /= 3;
                flag = 0;
            }
            else
            {
                cout << 0;
                return 0;
            }
        }
    }
    if(!st.empty())
    {
        cout << 0;
        return 0;
    }
    cout << ans;
}