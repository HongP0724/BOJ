//기억 다잡고 스택써서 다시 제대로 풀어봄.
//옛날코드하고 비교해보니까 거의 비슷하긴함.
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int, int>> s;
    int n;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > max)
        {
            max = num;
            cout << "0 ";
            s.push(make_pair(i + 1, num));
        }

        else
        {
            while (num > s.top().second)
            {
                s.pop();
            }
            cout << s.top().first << " ";
            s.push(make_pair(i+1,num));
        }
    }
}