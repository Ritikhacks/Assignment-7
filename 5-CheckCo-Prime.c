#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int min;
    if(a<b)
    {
        min = a;
    }
    else min = b;
    int i = 2;
    for (i; i <= min; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            printf("NOT! Co-prime\n");
            break;
        }
    }
    if(i == min+1)
    {
        printf("Co-prime\n");
    }
    
}