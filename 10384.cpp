#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[1000][3];
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int ratio = 1;

    for(int i = 0;i<m;i++)
    {
        sum+=arr[i][2];
        ratio = ratio / arr[i][0] * arr[i][1];

    }

    if(sum%2 == 0)
    {
        cout << 0 << " ";
    }
    else
        cout << 1 << " ";

    cout << (int) ratio;

    
}