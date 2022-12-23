#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>=1)
    {
        printf("1   ");
    }
    for (int i = 2; i <= n; i++)
    {
        // printf("Into LOOP 1\n");
        int j = 2;
        for (j; j < i; j++)
        {
            // printf("Into LOOP 2\n");
            if(i%j == 0)
            {
                break;
            }
        }
        // printf("Exiting LOOP 2\n");
        if(j == i)
        {
            printf("%d  ",i);
        }
    }
    

    return 0;
}