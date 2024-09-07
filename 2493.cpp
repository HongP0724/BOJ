#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int, int>> s;
    int max = 0;
    int n, h;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h;
        if (h > max)
        {
            cout << "0" << " ";
            s.push(make_pair(h, i));
            max = h;
        }

        else
        {
            while (s.top().first < h)
            {
                s.pop();
            }
            cout << s.top().second << " ";
            s.push((make_pair(h, i)));
        }
    }
}