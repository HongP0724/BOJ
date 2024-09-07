#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, h;
    long long ans = 0;
    cin >> N;
    stack<pair<int, long long>> s;
    stack<int> is;
    while (N--)
    {
        cin >> h;
        is.push(h);
    }

    while (!is.empty())
    {
        h = is.top();
        is.pop();
        pair<int, long long> new_elem(h, 0);
        while (!s.empty() && h > s.top().first)
        {
            long long ts = s.top().second;
            s.pop();
            new_elem.second += ts + 1;
        }
        if (s.empty() || h <= s.top().first)
        {
            s.push(new_elem);
            ans += new_elem.second;
        }
    }
    cout << ans;
}