/*4.  Write a program to find out the mood of a Camel.

Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length)
void output(float radius, float height, float length, int mood);
```

***Input***
```
5
2
4
```

***Output***
```
The Camel is Happy
```
*/