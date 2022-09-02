#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d ", sum);

    int difference = a - b;
    printf("%d\n", difference);

    float c, d;
    scanf("%f %f", &c, &d);
    float float_sum = c + d;
    printf("%.1f ", float_sum);
    float float_difference = c - d;
    printf("%.1lf", float_difference);

    return 0;
}

// or alternative way

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int sum = a + b;
//     int difference = a - b;
//     printf("%d %d\n", sum, difference);

//     float c, d;
//     scanf("%f %f", &c, &d);
//     float float_sum = c + d;
//     float float_difference = c - d;
//     printf("%.1f %.1lf ", float_sum, float_difference);

//     return 0;
// }