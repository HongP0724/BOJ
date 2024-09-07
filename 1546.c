#include <stdio.h>

int main(void)
{
    int total=0,temp,max=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        total += temp;
        if(temp>max)
            max=temp;
    }
    printf("%lf",(double)total/max*100/n);
}