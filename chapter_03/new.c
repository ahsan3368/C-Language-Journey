#include <stdio.h>
#include<math.h>
int main()
{

  // conditional instructions
  // if-else
  // switch case

  //  int age;
  //  printf("Enter your age:");
  //  scanf("\n%d",&age);
  //  if (age>=18)
  //  {
  //     printf("You can drive!");
  //  }
  //   else
  //   {
  //     printf("\n You can't drive!");
  //   }

  //  int a,b;
  //  printf("\n\tmaths quadrant system to check the inputted number lies in which quadrant\n");
  //  printf("enter 1st number:");
  //  scanf("%d",&a);
  //  printf("\nenter 2nd number:");
  //  scanf("%d",&b);

  //  if (a > 0 && b > 0)
  //  {
  //   printf("\n1st Quadrant!\n");
  //  }else if (a < 0 && b > 0)
  //  {
  //   printf("\n2nd Quadrant!\n");
  //  }else if (a<0 && b<0)
  //  {
  //       printf("\n3rd Quadrant!\n");
  //  }else if(a>0 && b<0)
  //  {
  //   printf("\n4th Quadrant!\n");
  //  }
  //  else{
  //   printf("\nOrigin!\n");
  //  }

  // int a;
  // printf("enter number to check even or odd:");
  // scanf("%d",&a);
  // if(a==0)
  // {
  //   printf("\n0 is not a -ve or +ve number");
  // }
  // else if (a%2==0)
  // {
  //   printf("\nEven Number");
  // }
  // else
  // {
  //   printf("\nOdd Number");
  // }

  /*
  logical operators
  AND: &&
  OR: ||
  NOT: !=
  */

  // printf("program to check the number is +ve or -ve");
  // int num;
  // printf("\nenter a number:");
  // scanf("%d",&num);
  // if (num>0)
  // {
  //   printf("\nPositive Integer");
  // }
  // else if (num<0)
  // {
  //   printf("\nNegative Integer");
  // }
  // else{
  //   printf("\nZero");
  // }

  // int a,b,c;
  // printf("enter a:");
  // scanf("%d",&a);
  // printf("enter b:");
  // scanf("%d",&b);
  // printf("enter c:");
  // scanf("%d",&c);
  // if (a>b&&a>c)
  // {
  //   printf("greatest integer:%d",a);
  // }
  // else if (b>a&&b>c)
  // {
  //   printf("greatest integer:%d",b);
  // }
  // else if (c>a&&c>b)
  // {
  //     printf("greatest integer:%d",c);
  // }
  // else{
  //   printf("All are equal: %d",a,b,c);
  // }

  // int s1, s2, s3, s4, s5, calc, total;

  // printf("Result Calculator");

  // printf("\nenter marks of English:");
  // scanf("%d", &s1);

  // printf("\nenter marks of Maths:");
  // scanf("%d", &s2);

  // printf("\nenter marks of Physics:");
  // scanf("%d", &s3);

  // printf("\nenter marks of Urdu:");
  // scanf("%d", &s4);

  // printf("\nenter marks of Computer:");
  // scanf("%d", &s5);

  // total = s1 + s2 + s3 + s4 + s5;
  // calc = (total*100)/500;

  // if (calc >= 90 && calc <= 100)
  // {
  //   printf("A-Grade");
  //   printf("\nRemarks:Ecellent");
  //   printf("\nTotal Marks: %d", total);
  // }
  // else if (calc >= 80 && calc <= 89)
  // {
  //   printf("B-Grade");
  //   printf("\nGood");
  //   printf("\nTotal Marks: %d", total);
  // }
  // else if (calc >= 70 && calc <= 79)
  // {
  //   printf("C-Grade");
  //   printf("\nBetter");
  //   printf("\nTotal Marks: %d", total);
  // }
  // else if (calc >= 60 && calc <= 69)
  // {
  //   printf("D-Grade");
  //   printf("\nNeed Improvement");
  //   printf("\nTotal Marks: %d", total);
  // }
  // else
  // {
  //   printf("F-Grade");
  //   printf("\nHardWork Needed");
  //   printf("\nTotal Marks: %d", total);
  // }

//   printf("program to check enter char is vowel or not");
  
//   char userInput;
  
//   printf("\nenter letter:");
//   scanf("%c", &userInput);

//  if (userInput>='0'&&userInput<='9')
//  {
//    printf("Please Enter A Character!");
//  }
//  else if 
//  (userInput=='a' || userInput == 'A' || userInput == 'e' || userInput == 'E' || userInput == 'i' || userInput == 'I' || userInput == 'o' || userInput == 'O' || userInput == 'u' || userInput == 'U' )
//  {
//   printf("Vowel: %c",userInput);
//  }
//  else{
//   printf("Consonant: %c", userInput);
//  }
 

// printf("\nmaking calculator\n");
// int operand1,operand2;
// char operator;

// printf("Enter Operand:");
// scanf("%d",&operand1);

// printf("Enter Operator (+,-,/,*):");
// scanf(" %c", &operator);

// printf("Enter Operand:");
// scanf("%d",&operand2);


// if ( operator == '+')
// {
//   int sum = operand1+operand2;
//   printf("%d + %d = %d",operand1,operand2,sum);
// }
// else if (operator=='-')
// {
//   int diff = operand1-operand2;
//   printf("%d - %d = %d",operand1,operand2,diff);
// }
// else if(operator=='/')
// {
//   if (operand2==0)
//   {
//     printf("Infinity");
//   }
//   else{
//   int div = operand1/operand2;
//   printf("%d / %d = %d",operand1,operand2,div);
// }
// }
// else if(operator=='*')
// {
//   int prod=operand1*operand2;
//   printf("%d * %d = %d",operand1,operand2,prod);
// }
// else
// {
//   printf("wrong operator or operation");
// }


// printf("\nQuadratic Formula\n");
// int ax,by,c;

// printf("a:");
// scanf("%d",&ax);
// printf("b:");
// scanf("%d",&by);
// printf("c:");
// scanf("%d",&c);

// int operation = pow(by,2)-4*(ax*c);
// if (ax >= 0 && ax <= 9 && by >= 0 && by <= 9 && c >= 0 && c <= 9)
// {
//   if (operation>0)
// {
//   printf("%dx -%dy -%d = %d",ax,by,c,operation);
//   printf("\nRoots are Real & Distinct");
// }
// else if(operation==0){
// printf("%dx -%dy -%d = %d",ax,by,c,operation);
//   printf("\nRoots are Real & Equal");
// }
// else{
//   printf("%dx -%dy -%d = %d",ax,by,c,operation);
//   printf("\nRoots are Complex");
// }

// }
// else{
//   printf("Invalid Operation");
// }


//shorthand if/else operator called Ternary Operator

//condition ? expression-if-true : expression-if-false

// int a,b;
// printf("enter a:");
// scanf("%d",&a);
// printf("enter b:");
// scanf("%d",&b);
// a>b?printf("a is greater!"):printf("b is greater!");



// Switch-Case Usage

// int a;
// printf("Enter a:");
// scanf("%d",&a);
// switch (a)
// {
// case 1:
//     printf("you entered 1!");
//     break;
// case 2:
//     printf("you entered 2!");
//     break;
//     case 3:
//     printf("you entered 3!");
//     break;
//     case 4:
//     printf("you entered 4!");
//     break;
//     case 5:
//     printf("you entered 5!");
//     break;
// default:
// printf("Wrong Input!");
//     break;
// }



printf("\nMarksheet\n");
int s1,s2,s3,s4,s5,total,percentage;
printf("English:");
scanf("%d",&s1);
printf("Maths:");
scanf("%d",&s2);
printf("Physics:");
scanf("%d",&s3);
printf("Computer:");
scanf("%d",&s4);
printf("Urdu:");
scanf("%d",&s5);

total = s1+s2+s3+s4+s5;
percentage = (total*100)/500;

switch (percentage)
{
case 1:
    Printf("A");
    break;

default:
    break;
}











 

  return 0;
}


