// #include <stdio.h>
// int main()
// {
//     printf("Enter Your Height Inc:");

//     double inch;
//     scanf("%lf", &inch);

//     // 1 inch = 0.0833feet;

//     double feet = inch * 0.0833;
//     printf("Your Height Is: %lf feet", feet);

//     return 0;
// }

#include <stdio.h>
int main()
{

    int height;
    printf("Enter Height in Inches:");
    scanf("%d", &height);

    int feet, inch;
    feet = height / 12;
    inch = height % 12;

    printf("Your Height Is: %d feet %d Inches", feet, inch);

    return 0;
}