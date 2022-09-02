#include <stdio.h>

int main()
{
    printf("Enter radius: ");

    double radius;
    scanf("%lf", &radius);
    // Premeter formula, C = 2*pi*r
    // Area formula, A = pi*r^r

    const double PI = 3.1416; // const hisabe PI k declare korsi jate PI er valule change na hoy

    double premeter = 2 * PI * radius;
    printf("Premeter Is = %.2lf\n", premeter); //% er por .2 diyeasi karon dosomic por 2 ghor output dibe

    double area = PI * radius * radius;
    printf("Premeter Is = %.2lf\n", area);

    return 0;
}