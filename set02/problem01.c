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
void input(float *base, float *height)
{
    printf("Enter the Base for a Triangle\n");
    scanf("%f", base);
    printf("Enter the Height for a Triangle\n");
    scanf("%f", height);
}

void find_area(float base , float height, float *area)
{
    *area= (0.5*(base*height));
}

void output(float base, float height, float area)
{
    printf("The Area of Triangle with Base %f and Height %f is %f" , base, height, area);
}

int main()
{
    float base, height, area;
    input(&base, &height);
    find_area(base ,height, &area);
    output(base, height, area);
    return 0;
}