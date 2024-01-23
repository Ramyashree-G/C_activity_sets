//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the First number\n");
    scanf("%d", &num1);
    printf("Enter the Second Number\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The Sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}