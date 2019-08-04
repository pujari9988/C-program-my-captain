			    //TASK 2 TO CONVERT TEMPERATURE 'c to FAHRENHEIT//
#include<stdio.h>
#include<conio.h>
void main()
   {
      float a,b,c;
      clrscr();
      printf("\n Enter a temperature value");
      scanf("%f",&a);
      b=(5*(a-32)/9);
      printf("\n Your temperature in fahrenheit is %f",b);
      getch();
   }