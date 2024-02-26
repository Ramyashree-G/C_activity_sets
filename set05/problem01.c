/*# 1.  Write a program to find the distance between two points.

***Function Declarations***

```c
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
```

***Input***

```
1.0 1.0
2.0 2.0
```

***Output***

```
The Distance between (1.0,1.0) and (2.0,2.0) is 1.0
```

---*/

#include<stdio.h>
#include<math.h>

struct _point 
{
  float x;
  float y;
};

typedef struct _point Point;

Point input()
{
    Point p;
    printf("Enter x coordinate for a point\n");
    scanf("%f", &p.x);
    printf("Enter y coordinate for a point\n");
    scanf("%f", &p.y);
    return p;
}
void dist(Point a, Point b, float *res)
{
    sqrt(pow(p.y - p.x,2))
}
int main()
{
    Point a, b, distance;
    a = input();
    b = input();

}