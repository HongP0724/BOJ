#include <stdio.h>

int main(void)
{
    int n, sum=0;
    char arr[100];
    scanf("%d %s",&n,arr);
    for(int i=0;i<n;i++)
    {
        sum += arr[i]-'0';
    }
    printf("%d",sum);
}