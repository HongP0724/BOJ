#include <stdio.h>

int main(void)
{
    int n, m, i, k, j, p, t;
    scanf("%d %d", &n, &m);
    int arr[101];
    int temp[101];
    for(int i=0;i<n;i++)
        arr[i] = i+1;
    while(m--)
    {
        scanf("%d %d %d",&i, &j, &k);
        for(p = k-1,t=0;p < j;p++)
            temp[t++] = arr[p];
        for(p = k-2;p>=i-1;p--)
            arr[p+j-k+1] = arr[p];
        for(p = i-1,t=0;p < j-k+i;p++)
            arr[p] = temp[t++];
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}