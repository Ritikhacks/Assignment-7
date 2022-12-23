#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {

        int count=0;
        int digit,temp;
        temp = i; //So that we will not loose our actual number
        int power=0;
        int temp2 = i; //for calculation of no. of digits

        while(temp2>0)
        {
            //calculating no. of digits
            power++; 
            temp2 = temp2/10;
        }

        while(temp > 0)
        {
            digit = temp%10;
            count += pow(digit,power);
            temp = temp/10;
        }

        if(count == i)
        {
            // printf("YES! it's Armstrong number\n");
            printf("%d  ",i);
        }
        
    }
    return 0;
}