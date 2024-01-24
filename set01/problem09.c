/*9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

***Function Declarations***
```c
float input();
float square_root(float n);
void output(float n, float sqrroot);
```

***Input***
```
Enter number: 49
```

***Output***
```
Square root of 49.0 is 7.0*/

#include<stdio.h>
#include<math.h>
float input()
{ 
    float n;
    printf("Enter a number\n");
    scanf("%f", &n);
    return n;
}
float square_root(float n)
{
    float x_old=1, x_new=n/2;
    float precision = 0.000001;
    while(fabs(x_new-x_old)> precision)
    {
        x_old=x_new;
        x_new= (x_old+n/x_old)/2;
    }
    return x_new;
}
void output(float n, float sqrroot)
{
    printf("Square root of %2.f is %2.f", n, sqrroot);
}
int main()
{
    float n;
    n= input();
    float sqrroot;
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}