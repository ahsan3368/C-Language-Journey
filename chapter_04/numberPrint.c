#include<stdio.h>
int main(){
    int n,m;
    printf("enter starting number:");
    scanf("%d",&n);
    printf("enter ending number:");
    scanf("%d",&m);
    while (n>=m)
    {
        printf("%d\n",n);
        n--;
    }
    

}