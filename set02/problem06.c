/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```

***Input***
```
hello
```

***Output***
```
olleh
```

---*/

#include <stdio.h>

void input_string(char *a)
{
    printf("Enter a string\n");
    scanf("%s" , a);
}

void str_reverse(char *str, char *rev_str)
{
    /*if(int i=0; a[i] == '\0'; i--)
    {
        
    }*/
}

void output(char *a, char *reverse_a)
{
    printf("The reverse of %s is %s", a, reverse_a);
}

int main()
{

}