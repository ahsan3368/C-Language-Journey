#include <stdio.h>

int main()
{

    // int length, width, height, volume;
    // printf("enter lenght:");
    // scanf("%d", &length);   // length taking
    // printf("enter width:");
    // scanf("%d", &width);   // width taking
    // printf("enter height:");
    // scanf("%d", &height);  // height taking
    // printf("\nlength is: %d", length);    //printing inputted value by user
    // printf("\nwidth is: %d", width);      //printing inputted value by user
    // printf("\nheight is: %d", height);    //printing inputted value by user
    // volume = length * width * height;      //performing calculations using volume formula i-e: lxbxh
    // printf("\nvolume is: %d", volume);      //printing final output


//    float area,radius;
//    float pie=3.14;

//    printf("enter radius:");
//    scanf("%f",&radius);
//    printf("\nradius = %f" , radius);
//    area=pie*radius*radius;
//    printf("\narea of circle= %f ",area);


// float celcius,farenheit; 
// printf("------temp conversion---------\n");
// printf("enter temp in celcius:");
// scanf("%f",&celcius); 
// printf("enter temp in farenheit:");
// scanf("%f",&farenheit);
// printf("\ntemp in Celcius is : %f",celcius);
// printf("\ntemp in farenheit is : %f",farenheit);
// float converted,converted2;
// converted=(celcius*9/5)+32;
// converted2=(farenheit-32)*5/9;
// printf("\nC to F : %f" , converted);
// printf("\nF to C : %f" , converted2);




printf("\ninterest calculating\n");
int int_rate,duration,amount,Total;
float int_converted,interest;


printf("\nenter amount you invest:",amount);
scanf("%d",&amount);

printf("\nenter time duration(in-yrs):",duration);
scanf("%d",&duration);

printf("\nenter interest rate:",int_rate);
scanf("%d",&int_rate);
 

int_converted=int_rate/100.0;
interest=amount*duration*int_converted;
Total=interest+amount;

printf("\nAmount:%d",amount);
printf("\nDuration:%dyrs",duration);
printf("\nInterest Percent:%d",int_rate);
printf("\nInterest rate in Decimals:%.4f",int_converted);
printf("\nso the interest earned is:%.f",interest);
printf("\nAmount After Interest:%d",Total);



































    return 0;
}