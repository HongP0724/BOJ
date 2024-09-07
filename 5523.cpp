#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    int a_s=0, b_s=0;
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        if(a>b)
            a_s++;
        else if(a<b)
            b_s++;
    }
    printf("%d %d",a_s,b_s);
}