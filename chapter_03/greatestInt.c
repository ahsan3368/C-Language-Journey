#include<stdio.h>

int main(){

    int a,b,c,d;

    printf("program to check greatest among four integers\n");

    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    printf("c:");
    scanf("%d",&c);

    printf("d:");
    scanf("%d",&d);
    
    if(a>b && a>c && a>d)
    {
        printf("gretest integer among is %d,%d,%d,%d \n",a,b,c,d);
        printf("a:%d",a);
    }
   else if(b>a && b>c && b>d)
   {
    printf("gretest integer among is %d,%d,%d,%d \n",a,b,c,d);
    printf("b:%d",b);
   }
   else if(c>a && c>b && c>d)
   {
    printf("gretest integer among is %d,%d,%d,%d \n",a,b,c,d);
    printf("c:%d",c);
   }
   else if(d>a && d>b && d>c)
   {
    printf("gretest integer among is %d,%d,%d,%d \n",a,b,c,d);
    printf("d:%d",d);
   }
   else
   {
    printf("all are equal %d,%d,%d,%d",a,b,c,d);
   }
   
   

    return 0;

}