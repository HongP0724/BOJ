#include <stdio.h>

int main(void)
{
    printf("Gnomes:\n");
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int prev, num, last;
        scanf("%d",&prev);
        scanf("%d",&num);
        scanf("%d",&last);
        if(num>prev)
        {
            if(last > num)
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
        else
        {
            if(last > num)
                printf("Unordered\n");
            else
                printf("Ordered\n");   
        }
    }
}