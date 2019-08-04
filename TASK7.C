		     //PROGRAM TO CHECK PALINDROM WORD

#include<stdio.h>
#include<conio.h>
void main()
  {
    char str[100];
    int i=0,j,length=0;
    clrscr();
    printf("Enter A string");
    gets(str);
    while(str[i]!='\0')
      {
	length++;
	i++;
      }
     i=0;
     j=length-1;
     while(i<=length/2)
     {
       if(str[i]==str[j])
	 {
	   i++;
	   j--;
	 }
	  else
	 {
	   break;
	 }
     }
    if(i>=j)
      printf("The word is palindrom ");
      else
      printf("The word is Not palindrom");
      getch();
 }