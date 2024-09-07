#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i = 1, x;
    while(i<=a && i<=b)
    {
        if(a%i == 0 && b%i == 0) x = i;
        i++;
    }
    printf("%d %d", x, a*b/x);

}