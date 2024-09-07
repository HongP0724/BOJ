#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int height[51] = {0,};
    int weight[51] = {0,};
    int win[51] = {0,};

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&height[i],&weight[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(height[i]>height[j] && weight[i]>weight[j])
                win[j]++;
            else if(height[i]<height[j] && weight[i]<weight[j])
                win[i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",win[i]+1);
    }
}