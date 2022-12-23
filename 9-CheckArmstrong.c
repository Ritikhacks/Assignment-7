#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count=0;
    int digit,temp;
    temp = n;
    int power=0;
    int temp2 = n;

    while(temp2>0)
    {
        //calculating no. of digits
        power++; 
        temp2 = temp2/10;
    }
    printf("%d  ",power);
    while(temp > 0)
    {
        digit = temp%10;
        count += pow(digit,power);
        temp = temp/10;
    }
    printf("%d  ",count);
    if(count == n)
    {
        printf("YES! it's Armstrong number\n");
    }
    else 
        printf("NOT! an Armstrong number\n");

    return 0;
}