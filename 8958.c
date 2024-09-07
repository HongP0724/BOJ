#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, len, score, sum;
    char arr[80];
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        score = 0;
        scanf("%s",arr);
        len = strlen(arr);
        for(int i=0;i<len;i++)
        {
            if(arr[i] == 'O')
            {
                score++;
                sum+=score;
            }
            else
            {
                score = 0;
            }
        }
        printf("%d\n",sum);
    }
}