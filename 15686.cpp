#include <bits/stdc++.h>
using namespace std;
// 1.m개의 치킨집을 고른다.
// 2.치킨 거리를 계산한다.

int n, m;
int is_used[51];
int arr[15];
int ans=INT_MAX;
vector<pair<int, int>> house_v, chicken_v;

int calc(void)
{
    int dist = 0;
    for(auto i =house_v.begin();i!=house_v.end();i++)
    {
        int min_dist = INT_MAX;
        for(int j=0;j<m;j++)
        {
            int v = abs(i->first - chicken_v[arr[j]].first) + abs(i->second - chicken_v[arr[j]].second);
            min_dist = min(min_dist, v); 
        }
        dist+=min_dist;
    }
    return dist;
}
void solve(int k, int st)
{
    if (k == m)
    {
        ans = min(calc(),ans);
        return;
    }
    for (int i = st + 1; i < chicken_v.size(); i++)
    {
        arr[k] = i;
        solve(k + 1,i);
    }
}
int main(void)
{
    cin >> n >> m;
    int temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (temp == 1)
            {
                house_v.push_back(make_pair(i, j));
            }
            else if (temp == 2)
            {
                chicken_v.push_back(make_pair(i, j));
            }
        }

    solve(0, -1);
    cout << ans;
}