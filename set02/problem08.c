/*08. Write a program to find the triangle with smallest area in n given triangles.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
```

***Input***
```
2 3
4 6
```

***Output***
```
The smallest triangle out of triangles with base and height (2,3) , (4,6) is the triangle having base 2.00, height 3.00 and area 3.00
```*/

#include<stdio.h>
#include<math.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int input_n()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    return n;
}
void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        printf("enter the base and altitude values:\n");
        scanf("%f %f",&t[i].base,&t[i].altitude);
    }
}
void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i].area=0.5*(t[i].base*t[i].altitude);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest_triangle=t[0];
    for(int i=1;i<n;i++)
    {
        if(t[i].area<smallest_triangle.area){
            smallest_triangle=t[i];
        }
    }
    return smallest_triangle;
}
void  output(int n, Triangle t[n], Triangle smallest)
{
    printf("the area of the triangles are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%f and %f is ")
    }
    printf("")
}
int main()
{
    int n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    Triangle smallest_triangle=find_smallest_triangle(n,t);
    output(n,t,smallest_triangle);
    return 0;

}