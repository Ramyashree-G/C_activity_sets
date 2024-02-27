/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);
```

***Input***
```
8
```

***Output***
```
8 is a composite number.
```

---*/

#include <stdio.h>
#include <math.h>
int input_number()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    return n;
}
int is_composite(int n)
{
    int i;
    for (i = 2; i <= sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void output(int n, int result)
{
    if (result == 0)
    {
        printf("%d is a composite number\n", n);
    }
    else
    {
        printf("%d is not a composite number\n", n);
    }
}

int main()
{
    int n;
    n = input_number();
    int result;
    result = is_composite(n);
    output(n, result);
    return 0;
}