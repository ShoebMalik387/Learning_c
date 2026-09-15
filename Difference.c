#include <stdio.h>

int main()
{
    int a, b, sum, difference, product;
    float average;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    average = (a + b) / 2.0;

    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);
    printf("\nAverage = %.2f", average);

    return 0;
}