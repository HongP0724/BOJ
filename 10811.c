#include <stdio.h>

int main(void)
{
    int size, t;
    int arr[100];
    scanf("%d %d",&size, &t);
    for(int i=0;i<size;i++)
            arr[i] = i+1;

    for(int i=0;i<t;i++)
    {
        int start, end;
        scanf("%d %d",&start, &end);
        start--;end--;
        for(int p=start;p <= (start + end)/2;p++)
        {
            int temp = arr[p];
            arr[p] = arr[start+end-p];
            arr[start+end-p] = temp;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}