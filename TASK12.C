	 //program by using switch case

#include<stdio.h>
#include<conio.h>
void main()
  {
     int temp1,temp2,temp3,d,f;
     clrscr();
     printf(" Chose yours options :\n 1.celcius to faharenheit \n2.faharenheit to celcius \n 3.exit");
     scanf("%d",&temp1);
      switch(temp1)
	{
	   case 1:printf("\n Enter the temperature value in celcius");
		  scanf("%d",&temp2);
		  temp3=(temp2*9/5)+32;
		  printf("faharenheit %d",temp3);

	  case 2:printf("\n Enter the temperature value in faharenheit");
		  scanf("%d",&d);
		  f=((d-32)*5/9);
		  printf("celcius is %d",f);

	 case 3:exit(0);default:printf("Wrong choice");


	}
getch();
  }



