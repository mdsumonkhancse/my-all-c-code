#include <stdio.h>

int main()
{
    printf("Enter Your Height Inch:");

    double inch;
    scanf("%lf", &inch);

    double feet = 0.08333 * inch;
    printf("Your Height Is: %lf feet", feet);

    return 0;
}