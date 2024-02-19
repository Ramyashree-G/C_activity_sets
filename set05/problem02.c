/*2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
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
```*/

#include <stdio.h>
#include <math.h>
#define Pi 3.1415

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the Stomach radius of the camel:\n");
    scanf("%f", radius);
    printf("Enter the height of the camel:\n");
    scanf("%f", height);
    printf("Enter the length radius of the camel:\n");
    scanf("%f", length);
}

float find_weight(float radius, float height, float length)
{
    float weight;
    weight = Pi * pow(radius, 3) * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %f height: %f, length: %f is %f", radius, height, length, weight);
}

int main()
{
    float radius, height, length;
    input_camel_details(&radius, &height, &length);
    float weight;
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}