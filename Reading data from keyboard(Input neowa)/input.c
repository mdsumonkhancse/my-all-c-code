#include <stdio.h>

int main()
{
    int english_marks;
    int math_marks;

    int biology_marks;
    int chemesty_marks;

    printf("Enter Marks For English = ");
    scanf("%d", &english_marks); // input newoar jonno scanf

    printf("Enter Marks For Math = ");
    scanf("%d", &math_marks); // input newoar jonno scanf

    int total_marks = english_marks + math_marks;
    printf("Total Marks Is = %d\n", total_marks);

    printf("Enter Marks in Biology and Chemesty:");
    scanf("%d %d", &biology_marks, &chemesty_marks); // ek sate inpur newoa

    int ek_sate_jogfol = biology_marks + chemesty_marks;
    printf("Total Marks Of Biology and Chemestry Is = %d", ek_sate_jogfol);
    return 0;
}
