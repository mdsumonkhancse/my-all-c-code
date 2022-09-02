#include <stdio.h>

int main()
{
    // int number = 10;
    // double realnumber = number;

    // printf("Integer Number Is= %d\n Real Number Is = %lf\n", number, realnumber);

    // double realnumber = 10.97;
    // int number = realnumber;

    // printf("Integer Number Is= %d\n Real Number Is = %lf\n", number, realnumber);

    int number1, number2;
    number1 = 20, number2 = 8;

    // int vagfol = number1 / number2;
    // printf("%d / %d = %d", number1, number2, vagfol);

    // double vagfol = number1 / number2;
    // printf("%d / %d = %lf", number1, number2, vagfol);

    double vagfol = (double)number1 / (double)number2; //(double)number1 er (double) iy holo type casting
    printf("%d / %d = %lf", number1, number2, vagfol);

    return 0;
}