#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000001], c;
    int count[26]={0,};
    scanf("%s",word);
    int len = strlen(word);

    for(int i=0;i<len;i++)
    {
        char c = word[i];
        if(c>='a')
            c-='a'-'A';
        
        count[c-'A']++;
    }
    int max = 0,flag=0, i;
    for(i=1;i<26;i++)
    {
        if(count[i]>count[max])
        {
            max = i;
            flag = 0;
        }
        else if(count[i] == count[max])
            flag = 1;
    }
    if(flag)
        printf("?");
    else
        printf("%c",'A'+max);
}