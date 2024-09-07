#include <stdio.h>

int main(void)
{
    int arr[10]={0,},a,b,c,result;
    scanf("%d %d %d",&a,&b,&c);
    result = a*b*c;
    while(result)
    {
        arr[result%10]++;
        result/=10;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}