#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,num,cnt = 0;
    scanf("%d",&n);
    int arr[1000]={0,};
    arr[1] = 1;
    for(int i=2;i<=sqrt(1000);i++)
    {
        if(!arr[i])
        {
            for(int j=2;j<=1000/i;j++)
            {
                arr[i*j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(!arr[num]) cnt++;
    }
    printf("%d",cnt);
}