#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void hanoi_print(int n, int start, int use, int end)
{
    if (n == 0)
    {
        return;
    }

    hanoi_print(n - 1, start, end, use);
    cout << start << " " << end << "\n";
    hanoi_print(n - 1, use, start, end);
}

void hanoi_count(int n)
{
    if(n==1)
    {
        cnt++;
        return;
    }
    hanoi_count(n-1);
    cnt++;
    hanoi_count(n-1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    hanoi_count(n);
    cout << cnt << "\n";
    hanoi_print(n, 1, 2, 3);
}