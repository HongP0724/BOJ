#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> Q;
    int t, n;
    string input;
    cin >> t;
    while (t--)
    {
        cin >> input;
        if (input == "push")
        {
            cin >> n;
            Q.push(n);
        }
        else
        {
            if (input == "pop")
            {
                if (!Q.empty())
                {
                    cout << Q.front();
                    Q.pop();
                }
                else
                    cout << -1;
            }
            else if (input == "size")
            {
                cout << Q.size();
            }
            else if (input == "empty")
            {
                cout << Q.empty();
            }
            else if (input == "front")
            {
                if (Q.empty())
                    cout << -1;
                else
                    cout << Q.front();
            }
            else
            {
                if (Q.empty())
                    cout << -1;
                else
                    cout << Q.back();
            }
            cout << '\n';
        }
    }
}