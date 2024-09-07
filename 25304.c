#include <stdio.h>

int main(void)
{
    int total, t, price, number;
    scanf("%d %d",&total, &t);
    while(t--)
    {
        scanf("%d %d",&price, &number);
        total -= price * number;
    }
    if(!total)
        printf("Yes");
    else
        printf("No");
}