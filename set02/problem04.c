/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```

***Input***
```
1 2 7 8 12
```

***Output***
```
2o
```

---*/

#include <stdio.h>
#include <math.h>

int input_array_size()
{
    int n;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the composite numbers\n");
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
}
int main()
{
    int n;
    n = input_array_size();
    int a[n];
    input_array(n, a);
}