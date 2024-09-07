#include <stdio.h>

int main(void)
{
    int num, count = 1;
    scanf("%d",&num);

    if(num==1)
    {
        printf("1");
        return 0;
    }

    num--;
    while(num>0)
    {
        num -= 6*count;
        count++;
    }
    printf("%d",count);
}