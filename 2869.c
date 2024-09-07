#include <stdio.h>

int main(void)
{
    int a, b, v;
    scanf("%d %d %d",&a,&b,&v);
    int left = v-a;
    if(left<=0) printf("1");
    else
    {
        printf("%d",(left-1)/(a-b)+2);
    }
}