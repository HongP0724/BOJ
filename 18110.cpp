#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n;
    int score;
    cin >> n;
    if(!n)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> score;
        v.push_back(score);
    }

    sort(v.begin(), v.end());

    int cut = round((double)n * 15 / 100);
    int sum = 0;
    for (int i = cut; i < n - cut; i++)
    {
        sum += v[i];
    }

    cout << round((double)sum / (n - 2 * cut));
}