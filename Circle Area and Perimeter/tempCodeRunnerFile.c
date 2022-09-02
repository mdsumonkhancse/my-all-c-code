#include <stdio.h>
int main()
{
    printf("Enter Your Height Inc:");

    double inch;
    scanf("%lf", &inch);

    // 1 inch = 0.0833feet;

    double feet = inch * 0.0833;
    printf("Your Height Is: %lf feet", feet);

    return 0;
}