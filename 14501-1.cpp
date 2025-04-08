#include <bits/stdc++.h>
using namespace std;

int arr[20][2];
int n;

//day번째 일부터 n번째 일까지 일의 합의 최댓값 계산해서 반환
int solution(int day, int sum)
{
    if(day == n+1)
    {
        return sum;
    }

    else if(day > n+1)
    {
        return -1;
    }

    return max(solution(day+arr[day][0],sum+arr[day][1]),solution(day+1,sum));
}

int main(void)
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    cout << solution(1,0);


}