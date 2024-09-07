#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v;
    int n;
    cin >> n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto i = v.begin();i!=v.end();i++)
    {
        cout << *i << "\n";
    }
}