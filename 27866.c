#include <stdio.h>

int main(void)
{
    char word[1001];
    int i;
    scanf("%s %d",word,&i);
    printf("%c",word[i-1]);
}