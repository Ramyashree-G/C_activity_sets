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
8 is a composite number.*/

#include<stdio.h>

int input_number()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}

int is_composite(int n)
{
    /*
    a composite number is a number which is divisible by other 1 and itself
     */
    for(int i=1;i<=n;i+2 )
    {
    //    if(n%2 == 0)
    //    {
    //     return 1;
    //    }
    
    }
}

void output(int n, int result)
{

}

int main()
{

}