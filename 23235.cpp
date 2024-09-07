#include <stdio.h>

int main(void)
{
    int n = 1;
    while(1)
    {
        int t;
        scanf("%d",&t);
        if(!t) break;
        for(int i=0;i<t;i++)
        {
            int k;
            scanf("%d",&k);
        }
        printf("Case %d: Sorting... done!\n",n++);
    }
}