/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

**Function Declarations**
```c
int input_number();
int is_composite(int n);
void output(int n, int result);*/

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
}

int input_number()
{
    int x;                                      
    printf("Enter number:");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    int count=0;
    if (n<=1)
    {
        return 0;
    }

    int i;
    for (i=2;  i<=n; i++)
    {
        if (n%i==0)
        {
            count=count+1;
            if (count >2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void output(int n, int result)
{
    if (result)
    {
        printf("%d is a composite number.",n);
    }
    else
    {
        printf("%d is not a composite number",n);
    }
}