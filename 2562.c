#include <stdio.h>

int main(void)
{
    int n, idx = 0, max = 0;
    for(int i=0;i<9;i++)
    {
        scanf("%d",&n);
        if(n>max) 
        {
            max = n;
            idx = i+1;
        }
    }
    printf("%d\n%d",max,idx);
}