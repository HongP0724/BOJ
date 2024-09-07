#include <stdio.h>

int main(void)
{
    char word[101];
    char temp='a';
    scanf("abc%s",word);
    printf("%s\n",word);
    scanf("%c",&temp);
    printf("[%c] is printed\n",temp);

}

// %[^문자] : 문자를 만나기 전까지 입력
// https://modoocode.com/36 레퍼런스 참고