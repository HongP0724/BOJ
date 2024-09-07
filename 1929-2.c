#include <stdio.h>
#include <math.h>

int arr[1000000];

int main(void)
{
    int m, n;
    scanf("%d %d",&m, &n);
    arr[1] = 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(!arr[i])
        {
            for(int j=2;j<=n/i;j++)
            {
                arr[i*j] = 1;
            }
        }
    }
    for(int i=m;i<=n;i++)
    {
        if(!arr[i]) printf("%d\n",i);
    }
}


//에라토스테네스의 채를 구현해보았다. 잊지말것!