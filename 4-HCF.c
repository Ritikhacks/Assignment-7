#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int HCF=1;
    int min ;
    if(a<b)
    {
        min = a;
    }
    else 
        min = b;
    
    printf("Changing HCF:   ");
    for (int i = 2; i <= min; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            HCF = i;
            printf("%d  ",HCF);
        }
    }
    printf("\n");
    
    printf("HCF of %d and %d is %d\n",a,b,HCF);
    return 0;
}