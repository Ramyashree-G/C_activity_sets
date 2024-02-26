/*12. Write a C program to find the sum of _n_ complex numbers

***Function Declarations***
```c
struct _complex {
    float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
```

***Input***
 ```
Enter the number of arrays: 3
2 3
4 5
6 7
```
***Output***
```
2+3i + 4+5i + 6+7i is 12+15i
```

*/
#include <stdio.h>

struct _complex
{
    float real, imaginary;
};
typedef struct _complex Complex;

int get_n()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter a complex number");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result;
    int i = 0;
    result.real = 0;
    result.imaginary = 0;
    for (i = 0; i < n; i++)
    {
        result = add(result, c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%2.f + %2.fi", c[i].real, c[i].imaginary);
    }
    printf(" is %2.f + %2.fi", result.real, result.imaginary);
}

int main()
{
    Complex a, b, sum;
    int n;
    n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    sum = add_n_complex(n, c);
    output(n, c, sum);
    return 0;
}
