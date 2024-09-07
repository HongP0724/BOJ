#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, count=0;
    scanf("%d",&n);
    while(n--)
    {
        char word[101], c;
        scanf("%s",word);
        int len = strlen(word), alpha[26] = {0,},i;
        for(i=0;i<len;i++)
        {
            while(i!=len-1&&word[i+1]==word[i])
                i++;
            c = word[i];
            if(alpha[c-'a']==1)
                break;
            else
                alpha[c-'a']=1;
        }
        if(i==len)
            count++;
    }
    printf("%d",count);
}