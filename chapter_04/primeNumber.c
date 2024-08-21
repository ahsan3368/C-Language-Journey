#include <stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d", &num);
    int not_prime = 0;
    // for (int i = 2; i < num; i++)
    // {
    //     printf("%d\n",i);
    //     if (num%i==0){
    //         not_prime=1;
    //         break;
    //     }
    // }
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            not_prime = 1;
            break;
        }
    }

    if (not_prime)
    {
        printf("Not A Prime Number:%d", num);
    }
    else
    {
        printf("Prime Number:%d", num);
    }

    return 0;
}