#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    queue<int> Q;
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
            else if (input == "back")
            {
                if (Q.empty())
                    cout << -1;
                else
                    cout << Q.back();
            }
            cout << endl;
        }
    }
}