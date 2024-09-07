#include <stdio.h>

int main(void)
{
    int x,y,w,h,min_x,min_y;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    min_x = x<=(w/2) ? x : w-x;
    min_y = y<=(h/2) ? y : h-y;
    printf("%d",min_x < min_y ? min_x : min_y); 
}