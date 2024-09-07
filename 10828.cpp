#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<int> S;
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;
        if (input == "push")
        {
            int n;
            cin >> n;
            S.push(n);
        }
        else
        {
            if (input == "pop")
            {
                if (!S.empty())
                {
                    cout << S.top();
                    S.pop();
                }
                else
                    cout << -1;
            }
            else if (input == "size")
            {
                cout << S.size();
            }
            else if (input == "empty")
            {
                cout << S.empty();
            }
            else if (input == "top")
            {
                if (S.empty())
                    cout << -1;
                else
                    cout << S.top();
            }
            cout << endl;
        }
    }
}