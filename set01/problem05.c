/*5. Write a C program to compare three numbers using **pass by value**

***Function Declarations***

```c
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
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
#include<stdio.h>
int input();
int compare(int a,int b,int c);
void output(int a,int b,int c,int largest);

int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
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

int compare(int a,int b,int c)
{
    int largest;
    if(a>=b && a>=c)
    {
        largest =a;
        return largest;
    }
    if(b>=a && b>=c)
    {
        largest =b;
        return largest;
    }
    else
    {
        largest =c;
        return largest;
    }
}
void output(int a,int b,int c,int largest)
{
    printf("The Largest is %d\n",largest);
} 
