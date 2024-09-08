//블로그에 포스팅하려고 다시 풀어봄.
//28일만에 다시 풀었는데 어떻게 풀었는지 기억이 하나도 안남.
//기억 안나서 다시 풀었는데 시간초과... 
//스택 안쓰고 배열로 풀면 시간복잡도 O(N^2)이라서 시간초과 발생.
//한번 풀었던 것도 가끔씩 다시 풀어보도록 하자.
//또 포스팅을 최대한 문제풀고나서 바로바로 하도록 하자...

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