#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s",word);
    int len = strlen(word), c;
    char alphabet[26];
    memset(alphabet,-1,26);
    for(int i=0;i<len;i++)
    {
        char c = word[i] - 'a';
        if(alphabet[c]==-1)
            alphabet[c] = i;
    }
    for(int i=0;i<26;i++)
    {
        printf("%d ",alphabet[i]);
    }
}