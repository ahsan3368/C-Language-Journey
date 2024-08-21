#include<stdio.h>

int main(){

    int a,b,result;
    char operator;
    printf("enter number:");
    scanf("%d",&a);
    printf("enter operator(+,-,*,/):");
    scanf(" %c",&operator);
    printf("enter number:");
    scanf("%d",&b);
     
    switch (operator){
        
    case '+':
    result=a+b;
    printf("%d + %d = %d",a,b,result);
    break;

    case '-':
    result = a - b ;
    printf("%d - %d = %d",a,b,result);
    break;
    
    case '*':
    result = a * b;
    printf("%d * %d = %d",a,b,result);
    break;
    
    case '/':
    if (b!=0){
    result=a/b;
    printf("%d - %d = %d",a,b,result);
    }else{
        printf("INFINITY");
    }
    break;
    
    default:
    printf("ERROR!");
    break;
    }

    return 0;

}