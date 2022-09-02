#include <stdio.h>

int main()
{
    int price = 20;
    printf("Price Is = %d\n", price);

    price = price + 10; // "=" ehkhane assign hisabe kaj korse
    printf("New Price Is = %d\n", price);

    price += 50; // price -= 50, price /= 50, price *= 50 egulo k bole arethmatic operator
    printf("New Price Is = %d\n", price);

    price++; // price er valule 1 barbe;eke bole increment or price-- = eke decrement bole;
    printf("New Price Is = %d\n", price);

    return 0;
}