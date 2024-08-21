#include<stdio.h>
int main(){
    int range;
    int product=1;
    int i;
    printf("enter range:");
    scanf("%d",&range);
    // for ( i = 1; i <= range; i++)
    // {
    //     product = product * i;
    //     printf("%d\n",i);
    // }
    i=1; //can't be 0 in product
    while (i<=range)
    {
        product*=i;
        printf("%d\n",i);
        i++;
    }
    
    printf("Factorail is: %d",product);
    return 0;
    
}