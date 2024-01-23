/*6. Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```

***Input***

```
1
1
0
```

***Output***

```
1
```

---*/
#include<stdio.h>
int input();
void compare(int a,int b,int c,int *largest);
void output(int a,int b,int c,int largest);

int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c, &largest);
    output(a,b,c,largest);
    return 0;
}

int input()
{
    int x;
    printf("Enter the values for a,b and c\n");
    scanf("%d", &x);
    return x;
}

void compare(int a,int b,int c,int *largest)
{
    if(a>=b && a>=c)
    {
        *largest =a;
    }
    if(b>=a && b>=c)
    {
        *largest =b;
    }
    else
    {
        *largest =c;
    }
}
void output(int a,int b,int c,int largest)
{
    printf("The Largest is %d\n",largest);
} 

