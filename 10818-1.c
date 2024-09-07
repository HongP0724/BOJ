#include <stdio.h>

int main(void)
{
    int n, input, min=1000000, max=-1000000;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&input);
        if(input>max) max = input;
        if(input<min) min = input;
    }
    printf("%d %d",min, max);
}