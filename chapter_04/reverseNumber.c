#include<stdio.h>
int main(){
    int number;
    int rev_Number=0;
    int remiander;
    printf("enter number to reverse:");
    scanf("%d",&number);
    while (number!=0)
    {
        remiander = number % 10;
        rev_Number = rev_Number * 10 + remiander;
        number = number/10;
    }
    printf("Number Reversed:%d",rev_Number);
    return 0;
    
}