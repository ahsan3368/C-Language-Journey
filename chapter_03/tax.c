#include<stdio.h>

int main(){

    int income;
    float tax;
    printf("enter your income : ");
    scanf("%d",&income);
    if (income<=250000)
    {
        printf("Tax : 0");
    }
    else if (income>250000 && income<=500000)
    {
        tax = (income-250000)*0.1; //10%
        printf("Income : %d\n",income);
        printf("Tax : %.2f" , tax);
    }
    else if(income>500000 && income<=1000000)
    {
        tax = (income-500000)*0.2+(250000*0.1);
        printf("Income : %d\n",income);
        printf("Tax : %.2f" , tax);
    }
    else{
        tax = (income-1000000)*0.3+(500000*0.2)+(250000*0.1);
        printf("Income : %d\n",income);
        printf("Tax : %.2f" , tax);
    }
    
    

    return 0;

}