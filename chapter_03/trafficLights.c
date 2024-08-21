#include <stdio.h>
int main()
{

    int color;
    printf("Enter Number:");
    scanf("%d", &color);
    switch (color)
    {
    case 1:
        printf("RED\n");
        printf("YOU SHOULD STOP!");
        break;
    case 2:
        printf("YELLOW\n");
        printf("PREPARE TO GO!");
        break;
    case 3:
        printf("GREEN\n");
        printf("GO!");
        break;
    default:
        printf("ERROR");
        break;
    }

    return 0;
}