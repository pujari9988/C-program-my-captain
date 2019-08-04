
     //PROGRAM TO FIND FACTORIAL OF THE GIVEN NUMBER/

#include<stdio.h>
#include<conio.h>
void main()
   {
     int num1,fact=1,i=1;
     clrscr();
     printf("Enter a number");
     scanf("%d",&num1);
       while(i<=num1)
	 {
	  fact=fact*i;
	  i++;
	 }
       printf("Factorial is %d",fact);
 getch();


   }