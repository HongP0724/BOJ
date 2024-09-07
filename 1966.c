#include <stdio.h>

int main(void)
{
    int t,n,m,arr[100],front=0,pop,max,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
            scanf("%d",arr+i);
            
        pop = -1;
        front = 0;
        count = 0;
        while(pop!=m)
        {
            max = 0;
            for(int i=0;i<n;i++)
                if(arr[i]>max) max = arr[i];

            while(arr[front] != max)
                front = (front+1)%n;
            
            pop = front;
            arr[front] = 0;
            count++;
        }
        printf("%d\n",count);
    }
}