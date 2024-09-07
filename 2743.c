#include <stdio.h>

int main(void)
{
    char word[101];
    scanf("%s",word);
    int len=0;
    while(word[len]) len++;
    printf("%d",len);
}