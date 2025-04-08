#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    set<int> s;
    for(int elem : v)
    {
        s.insert(elem);
    }

    map<int,int> m;

    int k = 0;
    for(int elem : s)
    {
        m[elem] = k++;
    }

    for(int elem : v)
    {
        cout << m[elem] << " ";
    }
}