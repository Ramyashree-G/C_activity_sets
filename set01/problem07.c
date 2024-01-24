/*7. Write a C program to find sum of all natural numbers until _n_

***Function Declarations***

```c
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
```

***Input***
```
1
2
3
```


***Output***
```
The largest of 1,2 and 3 is 3.
```*/
#include <stdio.h>
int input_n()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n)
{
    int i=0, sum=0;
    for(i=1;i<=n;i++)
    {
        sum =sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of first %d natural numbers is: %d\n", n,sum);
}
int main()
{
    int n,sum=0;
    n= input_n();
    sum= sum_n_nos(n);
    output(n,sum);
    return 0;
}