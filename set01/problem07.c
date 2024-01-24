/*7. Write a C program to find sum of all natural numbers until _n_

***Function Declarations***

```c
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
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
#include <stdio.h>
int input_n()
{
    int num;
    printf("Enter the numbers:\n");
    scanf("%d", &num);
    return num;
}