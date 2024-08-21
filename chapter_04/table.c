#include<stdio.h>
int main(){

    int table,range,i,sum;
    printf("enter table number:");
    scanf("%d",&table);
    printf("enter range:");
    scanf("%d",&range); 
    for ( i = 1; i <= range; i++)
    {
    printf("%d x %d = %d\n",table,i,table*i);
    sum += table*i;
    }
    printf("sum of table of %d is:%d",table,sum);
    // i=1;
    // while (i<=range)
    // {
    //     printf("%d x %d = %d\n",table,i,table*i);
    //     i++;
    // }
    // i=1;
    // do
    // {
    //    printf("%d x %d = %d\n",table,i,table*i);
    //    i++;
    // } while (i<=range);
  
    
    return 0;
}