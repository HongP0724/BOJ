#include <bits/stdc++.h>
using namespace std;

int arr[500001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cout << j + 1 << " ";
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << 0 << " ";
    }
}