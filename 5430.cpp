#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool reversed, error;
    int t, n, number;
    deque<int> dq;
    string p, x;
    cin >> t;
    while (t--)
    {
        number = 0;
        reversed = 0;
        error = 0;
        dq.clear();
        cin >> p >> n >> x;
        for (char elem : x)
        {
            if (isdigit(elem))
            {
                number = number * 10 + elem - '0';
            }
            else if (elem != '[' && n)
            {
                dq.push_back(number);
                n--;
                number = 0;
            }
        }

        for (char c : p)
        {
            if (c == 'R')
            {
                reversed = !reversed;
            }

            else if (c == 'D')
            {
                if (!dq.empty())
                {
                    if (reversed)
                    {
                        dq.pop_back();
                    }
                    else
                    {
                        dq.pop_front();
                    }
                }
                else
                {
                    cout << "error" << '\n';
                    error = 1;
                    break;
                }
            }
        }
        if (error)
            continue;
        cout << '[';
        if (reversed)
        {
            while (!dq.empty())
            {
                cout << dq.back();
                dq.pop_back();
                if (!dq.empty())
                {
                    cout << ",";
                }
            }
        }
        else
        {
            while (!dq.empty())
            {
                cout << dq.front();
                dq.pop_front();
                if (!dq.empty())
                {
                    cout << ",";
                }
            }
        }
        cout << ']';
        cout << '\n';
    }
}