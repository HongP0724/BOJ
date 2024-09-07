#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, cmd;
    char c;
    int M;
    cin >> s;
    list<char> l(s.begin(), s.end());
    auto i = l.end();
    cin >> M;
    while (M--)
    {
        cin >> cmd;
        if (cmd[0] == 'P')
        {
            cin >> c;
            l.insert(i, c);
        }
        else if (cmd[0] == 'L')
        {
            if (i != l.begin())
                i--;
        }
        else if (cmd[0] == 'D')
        {
            if (i != l.end())
                i++;
        }
        else if (cmd[0] == 'B')
        {
            if (i != l.begin())
            {
                i--;
                i = l.erase(i);
            }
        }
    }
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it;
    }
}