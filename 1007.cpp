#include <bits/stdc++.h>
using namespace std;

// 0~n-1의 n개의 정수중에서 0을 제외한 1~n-1의 n-1개의 정수중에서 n/2 -1개의 정수를 순서상관없이 뽑는다.
// n이 6이라고 한다면 1~5중 2개를 뽑는것이므로 5C2가 된다.
// 0과 위에서 뽑은 n/2-1개의 정수를 1로 표시한다. (start_point)
// start_point에 1로 표시된 인덱스는 point_arr에서 시작점인 점들의 인덱스가 된다.

int start_point[10];
int vector_x[20];
int vector_y[20];
int sum_x;
int sum_y;
int n;
long double ans = LDBL_MAX;

void solve(int k)
{
    if (k == n / 2)
    {
        int start_sum_x = 0;
        int start_sum_y = 0;
        for (int i = 0; i < n / 2; i++)
        {
            start_sum_x += vector_x[start_point[i]];
            start_sum_y += vector_y[start_point[i]];
        }
        int vector_sum_x = sum_x - 2 * start_sum_x;
        int vector_sum_y = sum_y - 2 * start_sum_y;
        long double dist = sqrt((long double)vector_sum_x * vector_sum_x + (long double)vector_sum_y * vector_sum_y);
        ans = min(dist, ans);
        return;
    }

    int st = 0;
    if (k > 0)
    {
        st = start_point[k - 1] + 1;
    }
    for (int i = st; i < n; i++)
    {
        start_point[k] = i;
        solve(k + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        sum_x = 0;
        sum_y = 0;
        ans = LDBL_MAX;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> vector_x[i] >> vector_y[i];
            sum_x += vector_x[i];
            sum_y += vector_y[i];
        }
        solve(0);
        cout << std::fixed << std::setprecision(10);
        cout << ans << "\n";
    }
}