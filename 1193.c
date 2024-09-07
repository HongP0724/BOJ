#include <stdio.h>

int main(void)
{
    int n,a,b;
    scanf("%d",&n);
    n--;
    int i;
    for(i=0;n>=(i+1)*(i+2)/2;i++);
    n-=i*(i+1)/2;
    if(!(i%2)) //홀수라인
    {
        a = i+1 - n;
        b = 1 + n;
    }
    else
    {
        a = 1 + n;
        b = i+1 - n;
    }
    printf("%d/%d",a,b);
}