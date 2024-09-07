#include <stdio.h>

int main(void)
{
    char word[101];
    while(scanf(" %[^\n]",word)!=EOF)
    {
        printf("%s\n",word);
    }
}

// %[^문자] : 문자를 만나기 전까지 입력