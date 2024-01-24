/*11. Write a C program to find the sum of 2 complex numbers

***Function Declarations***
```c
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
```

***Input***
```
2 3
4 5
```

***Output***
```
The sum of 2+3i and 4+5i is 6+8i
```*/
#include<stdio.h>
struct _complex {
   float real;
   float imaginary;
};
typedef struct _complex complex;

complex input_complex()
{
    complex c;
    printf("Enter the real part\n");
    scanf("%f", &c.real);
    printf("Enter the imaginary part\n");
    scanf("%f", &c.imaginary);
    return c;
}
complex add_complex(complex a, complex b)
{
    complex sum;
    sum.real= a.real+b.real;
    sum.imaginary= a.imaginary + b.imaginary;
    return sum;
}
void output(complex a, complex b, complex sum)
{
    printf("The sum of %2.f+%2.fi and %2.f+%2.fi is %2.f+%2.fi", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
int main()
{
    complex a, b, sum;
    a=input_complex();
    b=input_complex();
    sum= add_complex(a,b);
    output(a,b,sum);
    return 0;
}


