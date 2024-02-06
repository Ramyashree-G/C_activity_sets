/*10. Write a C program to compare two strings, character by character.

> For example, `Hello` should be equal to `Hello`, but not equal to `hello`.

> `Hello` will be lesser than `Hellw` (alphabetical order).

***Function Declarations***

```c
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
```

***Input***
```
Enter the first string: hello
Enter the second string: world
```

***Output***
```
world is greater than hello
```
*/
#include<stdio.h>
void input_two_strings(char *string1, char *string2)
{
    printf("Enter first string\n");
    scanf("%s", string1);
    printf("Enter second string\n");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{
    int i;
    for(i = 0; string1[i] == string2[i]; i++);

    if(string1[i] == '\0')
        {
            return -1;
        }
        else
        {
            return 1;  
        }
}
void output(char *string1, char *string2, int result) 
{
    if (result < 0) 
    {
        printf("%s is lesser than %s\n", string1, string2);
    } 
    else if (result > 0) 
    {
        printf("%s is greater than %s\n", string1, string2);
    } 
    else 
    {
        printf("%s is equal to %s\n", string1, string2);
    }
}

int main() 
{
    char string1[100], string2[100];
    int result;
    input_two_strings(string1, string2);
    result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}
