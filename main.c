#include <stdio.h>
#include <stdlib.h>

//AS20250616
int main()
{
    float sub1,sub2, sub3;
    float total, average;
    char grade;
    float highestMark;

    printf("Enter the marks of the first subject(Out of 100): ");
    scanf("%f", &sub1);

    printf("Enter the marks of the second subject(Out of 100): ");
    scanf("%f", &sub2);

    printf("Enter the marks of the third subject(Out of 100): ");
    scanf("%f", &sub3);

    total=sub1+sub2+sub3;
    average=total/3.0;

    if (average>=80){
        grade='A';
    } else if (average>=70){
        grade='B';
    } else if (average>=60){
        grade='C';
    } else if (average>=50){
        grade='D';
    } else {
        grade='F';
    }

    highestMark = (float)sub1;
    if ((float)sub2 > highestMark) highestMark = (float)sub2;
    if ((float)sub3 > highestMark) highestMark = (float)sub3;

    printf(".........................\n");
    printf("Total:       %.2f\n", total);
    printf("Average:      %.2f\n", average);
    printf("Grade:            %c\n", grade);

    if (sub1>=40 && sub2>=40 && sub3>=40){
        printf("Result:        PASS\n");

        if (average>=85 && sub1>=80 && sub2>=80 && sub3>=80){
            printf("Award:     DISTINCTION\n");
        }

    } else {
        printf("Result:    FAIL\n");
    }

    printf("Highest Mark: %.2f\n", highestMark);
    printf(".........................\n");

    return 0;
}
