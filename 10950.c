#include <stdio.h>

int main(void)
{
    int t, a, b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a, &b);
        printf("%d\n",a+b);
    }    
}