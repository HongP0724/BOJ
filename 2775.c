#include <stdio.h>

int arr[15][15];

int main(void)
{
    int t;
    int n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&k,&n);

        for(int i=0;i<=k;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==0 || j==1)
                    arr[i][j] = j;
                else
                    arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }

        printf("%d\n",arr[k][n]);
    }

}