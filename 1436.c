#include <stdio.h>

int main(void)
{
    int i=666, n, count = 1, temp;
    scanf("%d",&n);
    while(count < n)
    {
        i++;
        temp = i;
        while(temp>=100)
        {
            if(temp % 1000 == 666)
            {
                count++;
                break;
            }
            temp/=10;
        }
    }
    printf("%d",i);
}