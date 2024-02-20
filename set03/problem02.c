/*2. Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
```

***Input***
```
1 1
0 0
1 1
```

***Output***
```
The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle
```

---*/

#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the x and y co-ordinate for First point\n");
    scanf("%f %f", x1, y1);
    printf("Enter the x and yco-ordinate for Second point\n");
    scanf("%f %f", x2, y2);
    printf("Enter the x and yco-ordinate for Third point\n");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{

}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{

}

int main()
{
    float x1,x2,x3,y1,y2,y3, result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}