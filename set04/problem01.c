/*
1. Write a program to find sum of two fractions

***Function Declarations***
```c
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
```

***Input***
```
1 4
1 2
```

***Output***
```
1/2 + 1/4 = 3/4
```

---*/

#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the Numerator and the Denominator for the first Fraction:\n");
    scanf("%d %d", num1, den1);
    printf("Enter the Numerator and the Denominator for the Second Fraction:\n");
    scanf("%d %d", num2, den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num = ((num1 * den2) + (num2 * den1));
    *res_den = (den1 * den2);
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d", num1, den1, num2, den2, res_num, res_den);
}
int main()
{
    int num1, num2, den1, den2;
    input(&num1, &den1, &num2, &den2);
    int res_num, res_den;
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}