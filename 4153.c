#include <stdio.h>

int main(void)
{
    int a,b,c;
    while(1)
    {
        scanf("%d %d %d",&a, &b, &c);
        if(!a && !b && !c)
            break;
        
        int max = a>b?a>c?a:c:b>c?b:c;
        if(a*a + b*b + c*c == 2 * max * max)
            printf("right\n");
        else
            printf("wrong\n");
    }
    
}