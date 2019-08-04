#include<stdio.h>
#include<conio.h>
void main()
   {
      int a;
      int long b=0;
      //int b[10];
      char name[20];
      clrscr();
      printf("\n Please, Enter Your name :");
      scanf("%s",&name);
      printf("\n  Enter your  Age:");
      scanf("%d",&a);
      printf("\n  Enter mobile number:");
      scanf("%d",&b);
      printf("\n Name is %s",name);
      printf("\n  Age is %d",a);
      printf("\n Your mobile number is %ld",b);
      getch();
   }