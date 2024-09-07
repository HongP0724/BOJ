#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int num_list[10];
int is_used[10];

void solution(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!is_used[i])
        {
            is_used[i] = 1;
            arr[k] = num_list[i];
            solution(k+1);
            is_used[i] = 0;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num_list[i];
    }

    sort(num_list, num_list + n);

    solution(0);
}