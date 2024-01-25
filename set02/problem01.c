/*01.  Write a program to find the area of a triangle.

***Function Declarations***
```c
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
```

***Input***
```
1
2
```

***Output***
```
The area of the traingle with base 1.000000 and height 2.000000 is 1.000000*/

#include <stdio.h>
struct Triangle 
{
    float base;
    float height;
}
typedef struct Triangle triangle

void input(float *base, float *height)
{
    printf("Enter the Base for triangle");
    scanf("%f", t.base);
    printf("Enter the Height for triangle");
    scanf("%f", t.height);
}

void find_area(float base , float height, float *area)
{
    area = 
}

void output(float base, float height, float area)
{
    printf("The area of the triangle with base %f and height %f is %f");
}

int main()
{

}