#include <stdio.h>
int main()
{
    int key;
    printf("Enter a number: ");
    scanf("%d",&key);

    int a = 0, b = 1;
    int fib=0;

    if(key<0)
    {
        printf("NOT! Fibonnaci\n");
    }
    else if(key == a || key == b)
    {
        printf("YES! it's Fibonnaci number\n");
    }
    else 
    {  
        printf("INTO THE ELSE\n");
        for (int i = 3; fib<=key ; i++)
        {
            fib = a + b;
            printf("INTO THE LOOP\n");
            if(fib == key)
            {
                printf("Yes! it's Fibonnaci number\n");
                break;
            }
            a = b;
            b = fib;
        }
    }
}