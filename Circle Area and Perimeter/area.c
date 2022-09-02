#include <stdio.h>

int main()
{
    printf("Enter height of rectangle-h:");
    int height;
    scanf("%d", &height);

    printf("Enter width of rectangle-w:");
    int width;
    scanf("%d", &width);

    // Area, A = height * width;
    // Perimeter, P = (H + W) * 2;

    int area = height * width;
    printf("Your Area Is: %d\n", area);

    int Perimeter = (height + width) * 2;
    printf("Your Perimeter Is: %d\n", Perimeter);

    return 0;
}