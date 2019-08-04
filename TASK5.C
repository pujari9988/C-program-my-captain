	       //PROGRAM TO SHOW USER ENTERED NUMBER IN REVERSE

#include<stdio.h>
#include<conio.h>
void main()
   {
      int no,reverse=0,rem;
      clrscr();
      printf("Enter your number");
      scanf("%d",&no);
      while(no!=0)
	{
	  rem=no%10;
	  reverse=reverse*10+rem;
	  no/=10;
	}
      printf("Reverse number is %d",reverse);
      getch();
   }