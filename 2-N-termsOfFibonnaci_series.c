#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 0, b = 1;
    int fib;
    if(n<=0)
    {
        printf("Invalid Number!\n");
    }
    else if(n == 1 )
    {
        fib = a;
        printf("%d  ",fib);
    }
    else if(n == 2)
    {
        fib = b;
        printf("%d  ",fib);
    }
    else 
    {
        printf("%d  %d  ",a,b);
            
        for (int i = 3; i <= n; i++)
        {
            fib = a + b;
            printf("%d  ",fib);
            a = b;
            b = fib;
        }
    }
    return 0;
}