#include <stdio.h>

char arr[500000];
int main(void)
{
    int n;
    scanf("%d",&n);
    int front = 0,cnt = n,ans=0;
    while(cnt>1)
    {
        arr[front] = 1;
        cnt--;
        for(int i=0;i<2;i++)
        {
            do
            {
                front = (front+1)%n;
            } while(arr[front]);
            if(i==1)
                ans = front;
        }
    }
    printf("%d",ans+1);
}