   //PROGRAM TO CALCULATE AVERAGE OF THREE SUBJECT MARKS

#include<stdio.h>
#include<conio.h>
void main()
{
     float a,b,c,s,e;
     clrscr();
     printf("Enter your three subject marks::");
     scanf("%f %f %f",&a,&b,&c);
     s=a+b+c;
     printf("\n Sum of your three subject marks is %f",s);
     e=(s/3*100);
     printf("\n An average of your marks is  %f",e);
     getch();
   }