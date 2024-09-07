#include <stdio.h>
#include <string.h>

int main(void)
{
    double score, grade, grade_sum = 0, score_sum = 0;
    char grade_string[3];
    for(int i=0;i<20;i++)
    {
        scanf("%*s %lf %s",&score, grade_string);
        switch(grade_string[0])
        {
            case 'A':
                grade = 4;
                score_sum += score;
                break;
            case 'B':
                grade = 3;
                score_sum += score;
                break;
            case 'C':
                grade = 2;
                score_sum += score;
                break;
            case 'D':
                grade = 1;
                score_sum += score;
                break;
            case 'F':
                grade = 0;
                score_sum += score;
                break;
            default:
                continue;
        }
     
        if(grade_string[0]!='F' && grade_string[1] == '+')
            grade+=0.5;
        grade_sum += grade * score;
    }
    grade_sum /= score_sum;
    printf("%lf",grade_sum);
}