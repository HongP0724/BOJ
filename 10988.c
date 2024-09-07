#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s",word);
    int len = strlen(word), i;
    for(i=0;i<=len/2;i++)
    {
        if(word[i] != word[len-1-i])
            break;
    }
    printf("%d",i==len/2+1);
}