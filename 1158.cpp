#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, ans;
    cin >> n >> k;
    vector<int> l;
    for(int i=1;i<=n;i++)
        l.push_back(i);
    vector<int>::iterator it = l.begin();
    cout << "<";
    while(!l.empty())
    {   
        for(int i=0;i<k-1;i++)
        {
            ++it;
            if(it==l.end()) it = l.begin();
        }
        cout << *it;
        if(l.size() != 1)
            cout << ", ";
        it = l.erase(it);
        if(it==l.end()) it = l.begin();
    }
    cout << ">";
    
}