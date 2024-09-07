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
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}