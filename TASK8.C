		      //program to show maths tablenumber

#include<stdio.h>
#include<conio.h>
void main()
  {
     int num,i;
     clrscr();
     printf("Enter the table number");
     scanf("%d",&num);
      for(i=1;i<=10;i++)
	{
	  printf("\n %d*%d=%d",num,i,num*i);
	}
     getch();

  }