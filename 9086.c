#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    char word[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",word);
        printf("%c%c\n",word[0],word[strlen(word)-1]);
    }
}