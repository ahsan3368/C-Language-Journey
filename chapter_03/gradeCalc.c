#include <stdio.h>

int main()
{

    int s1, s2, s3, s4, s5, total;
    int percent;

    printf("enter S1 marks:");
    scanf("%d", &s1);

    printf("enter S2 marks:");
    scanf("%d", &s2);

    printf("enter S3 marks:");
    scanf("%d", &s3);

    printf("enter S4 marks:");
    scanf("%d", &s4);

    printf("enter S5 marks:");
    scanf("%d", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percent = (total * 100) / 500;

    switch (percent / 10)
    {
    case 10:
        break;
    case 9:
        printf("Total Marks:%d\n", total);
        printf("Percentage:%d\n", percent);
        printf("Grade: A\n");
        break;
    case 8:
        printf("Total Marks:%d\n", total);
        printf("Percentage:%d\n", percent);
        printf("Grade: B\n");
        break;
    case 7:
        printf("Total Marks:%d\n", total);
        printf("Percentage:%d\n", percent);
        printf("Grade: C\n");
        break;
    case 6:
        printf("Total Marks:%d\n", total);
        printf("Percentage:%d\n", percent);
        printf("Grade: D\n");
        break;
    default:
        if (percent < 60)
        {
            printf("Total Marks:%d\n", total);
            printf("Percentage:%d\n", percent);
            printf("Grade: Fail\n");
        }
        else
        {
            printf("ERROR");
        }
        break;
    }

    return 0;
}