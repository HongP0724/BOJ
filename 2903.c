#include <stdio.h>

int main(void)
{
    int n, num = 3;
    scanf("%d",&n);
    while(--n)
    {
        num+=num-1;
    }
    printf("%d",num*num);
}