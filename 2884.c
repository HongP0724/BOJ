#include <stdio.h>

int main(void)
{
    int hour, minute;
    scanf("%d %d",&hour, &minute);
    minute-=45;
    if(minute<0)
    {
        hour--;
        if(hour<0)
            hour+=24;
        minute+=60;
    }
    printf("%d %d",hour, minute);
}