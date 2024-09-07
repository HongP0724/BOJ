#include <stdio.h>

int main(void)
{
    int arr[1000] = {0,};
    int n,k,left,i;
    scanf("%d %d", &n, &k);
    left = n;
    i = -1;
    printf("<");
    while(left > 0)
    {
        for(int j=0;j<k;j++)
        {
            do
            {
                i = (i+1)%n;
            } while(arr[i]==1);
        }
        if(left==1)
        {
            printf("%d>",i+1);
        }
        else
            printf("%d, ", i+1);
        arr[i] = 1;
        left--;
    }
}