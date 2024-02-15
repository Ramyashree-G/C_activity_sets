/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
```

***Input***
```
5
4
5
```

***Output***
```
The triangle with sides 5, 4 and 5 is not scalene
```
*/
#include <stdio.h>
int input_side()
{
    int t_side;
    printf("Enter a side of a Triangle:\n");
    scanf("%d", &t_side);
    return t_side;
}

int check_scalene(int a, int b, int c)
{
    if(a!= b && b!=c && c!= a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int a, int b, int c, int isscalene)
{
    
}