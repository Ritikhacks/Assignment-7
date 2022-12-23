#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fib;
    int a = 0, b = 1;
    if(n==1)
    {
        fib = a;
    }
    else if(n==2)
    {
        fib = b;
    }
    else 
    {
        for (int i = 3; i <= n; i++)
        {
            fib = a + b; //3rd element
            a = b;
            b = fib;
        }
    }
    
    printf("%d element of Fibbonnaci series is %d\n",n,fib);
        
}