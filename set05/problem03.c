/*3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***
```c
struct camel {
    float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);
```

***Input***

```
1
1
1
```

***Output***

```
The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415
```

---
*/
#include <stdio.h>
#include <math.h>

struct camel
{
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input()
{
    Camel c;
    printf("Enter the Stomach radius of the Camel:\n");
    scanf("%f", &c.radius);
    printf("Enter height of the Camel:\n");
    scanf("%f", &c.height);
    printf("Enter the legth of the Camel:\n");
    scanf("%f", &c.length);
    return c;
}

float find_weight(Camel c)
{
    float weight;
    c.weight = 3.1415 * pow(c.radius, 3) * sqrt(c.height * c.length);
    return c.weight;
}
// void find_weight(Camel *c)
// {
//     c->weight = 3.1415 * pow(c->radius, 3) * sqrt(c->height * c->length);
// }
void output(Camel c)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f", c.radius, c.height, c.length, c.weight);
}
int main()
{
    Camel c;
    c = input();
    c.weight = find_weight(c);
    output(c);
    return 0;
}