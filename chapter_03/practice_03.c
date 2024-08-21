#include <stdio.h>

int main()
{

    // int a = 11;
    // if (a=12)
    // {
    //     printf("i am 11");
    // }else{
    //     printf("i am 12");
    // }

    int s1, s2, s3;
    printf("\nenter marks of s1:\n");
    scanf("%d", &s1);
    printf("\nenter marks of s2:\n");
    scanf("%d", &s2);
    printf("\nenter marks of s3:\n");
    scanf("%d", &s3);
    int total = (s1 + s2 + s3) / 3;
    if (s1 < 33 || s2 < 33 || s3 < 33)
    {
        printf("You are failed eacuse of less marks in individual Subject");
        printf("\nmarks are: %d , %d and %d", s1, s2, s3);
    }
    else if (total < 40)
    {
        printf("you are failed due to less percentage");
        printf("\nmarks are: %d , %d and %d", s1, s2, s3);
    }
    else
    {
        printf("you are passed!");
        printf("\nmarks are: %d , %d and %d", s1, s2, s3);
    }

    return 0;
}