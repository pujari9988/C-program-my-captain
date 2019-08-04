	     //PROGRAM TO CHECK ANGSTRONG NUMBER

#include<stdio.h>
#include<conio.h>
void main()
   {
     int n,s,c,sum=0,temp;
     clrscr();
     printf("Enter two digit");
     scanf("%d",&n);
     temp=n;
     while(n>0)
       {
	 n=n%10;
	 c=n*n*n;
	 sum=sum+c;
	 n=n/10;

       }
     n=temp;
     if(n==sum)
       {
	 printf("Entered number is Angstrong number ");
       }
	 else
       {
	printf("Entered number is not an angstrong number");

       }
    getch();
   }