#include <bits/stdc++.h>
using namespace std;


//최초로 천간이 x인 서기년도는 x년이다.
//a년과 a+10년의 천간은 동일하고 지지는 (a+10)%n이다.
//그럼 천간이 x 지지가 y인 서기년도를 구하는 방법은 다음과 같다.
//1. 최초로 천간이 x인 서기년도 x부터 탐색을 시작한다.
//2. 10년씩 건너 뛰어 해당년도의 지지를 확인해 같으면 출력 다르면 다시 10년을 건너뛴다. (천간 고정후 지지탐색)
//3. 서기년도가 60년보다 커지면 해당 간지 조합이 갑자안에 없다는 뜻이므로 -1을 출력한다.
//최대 탐색 횟수는 lcd(m,n) / m == n / gcd(m,n) 이다.
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int m,n,x,y;
        cin >> m >> n >> x >> y;    //x = 최초로 천간이 x인 서기년도, (x-1)%n =서기년도의 지지 인덱스 y-1 = 타겟 지지 인덱스
        while(1)
        {
            if((x-1)%n==y-1)
            {
                cout << x << "\n";
                break;
            }
            else if(x > m * n)
            {
                cout << -1 << "\n";
                break;
            }
            else
            {
                x += m;
            }
        }
    }
}