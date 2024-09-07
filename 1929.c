#include <stdio.h>
#include <math.h>

int main(void)
{
    int m, n,flag;
    scanf("%d %d",&m, &n);
    for(int i=m;i<=n;i++)
    {
        if(i==1)
            continue;
        flag = 0;
        for(int k=2;k<=sqrt(i);k++)
        {
            if(!(i%k))
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            printf("%d\n",i);
    }
}