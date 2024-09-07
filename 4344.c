#include <stdio.h>

int main(void)
{
    int arr[1000], n, score, t, sum, count;
    double avg;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&score);
            sum+=score;
            arr[i] = score;
        }
        avg = (double)sum/n;
        count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > avg) count++;
        }
        printf("%.3lf%%\n", (double)count/n * 100);
    }
}