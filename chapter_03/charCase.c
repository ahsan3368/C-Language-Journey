#include<stdio.h>

int main(){

    char letter;
    printf("enter a character to check whether it is UpperCase or LowerCase:");
    scanf("%c",&letter);
    if (letter>='A' && letter<='Z')
    {
        printf("UpperCase:%c\n",letter);
        printf("value of %c is %d",letter,letter);
    }
    else if(letter>='a' && letter<='z')
    {
        printf("LowerCase:%c\n",letter);
        printf("value of %c is %d",letter,letter);

    }
    else
    {
        printf("Not A Letter:%c",letter);
    }
    
    

    return 0;

}