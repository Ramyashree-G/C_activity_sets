/*1. Write a program to find the distance between 2 points

***Function Declarations***
```c
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
```

***Input***
```
1 1
2 2
```

***Output***
```
The distance between point (1.0000000, 1.0000000) and (2.0000000, 2.0000000) is 1.4142
```

---*/

#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x co-ordinate for First point\n");
    scanf("%f", x1);
    printf("Enter the y co-ordinate for First point\n");
    scanf("%f", y1);
    printf("Enter the x co-ordinate for Second point\n");
    scanf("%f", x2);
    printf("Enter the y co-ordinate for Second point\n");
    scanf("%f", y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The Distance between point (%f, %f) and (%f, %f) is %f", x1, y1, x2, y2, distance);
}
int main()
{
    float x1, x2, y1, y2;
    input(&x1, &x2, &y1, &y2);
    float distance;
    distance = find_distance(x1, x2, y1, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}