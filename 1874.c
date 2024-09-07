#include <stdio.h>

int main(void)
{
    int stack[100000];
    int arr[100000];
    char answer[200000];
    int n,top=0,temp,idx = 0,max_num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        stack[i] = i+1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++)
    {
        temp = arr[i];
        if(temp>top)
        {
            for(int i=max_num;i<temp;i++)
                answer[idx++] = '+';
            max_num = temp;
            top = temp;
        }
        else
        {
            if(temp!=top)
            {
                printf("NO\n");
                return 0;
            }
        }
        answer[idx++] = '-';
        stack[top-1] = 0;
        while(!stack[top-1])
            top--;
    }
    for(int i=0;i<idx;i++)
        printf("%c\n",answer[i]);

    
}