#include <stdio.h>
int main()
{
    int range;
    int sum = 0;
    printf("enter range:");
    scanf("%d", &range);
    // for (int i = 1; i <= range; i++)
    // {
    //     sum = sum + i;
    //     printf("%d\n", i);
    // }
    int i = 1;
    while (i <= range)
    {
        sum += i;
        printf("%d\n", i);
        i++;
    }

    printf("sum is %d\n", sum);
    return 0;
}