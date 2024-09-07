#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    queue<int> q;
    int n;
    cin >> n;
    int max = 0;
    int last;
    while (n--)
    {
        int input;
        cin >> input;
        if (input == 1)
        {
            cin >> input;
            q.push(input);
            if (q.size() > max)
            {
                max = q.size();
                last = q.back();
            }
            else if (q.size() == max && q.back() < last)
                last = q.back();
        }
        else
        {
            q.pop();
        }
    }
    cout << max << " " << last;
}