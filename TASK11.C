	      //PROGRAM BY USING STRUCTURE AND FUNCTION

#include<stdio.h>
#include<conio.h>
void main()
   {
     struct student
       {
	 char book[100];
	 char title[100];
	 char author[100];
	 char genre[100];
       };
      struct student stud1;
      clrscr();
      printf("Enter A book ");
      scanf("%s",stud1.book);
      printf("Enter a title");
      scanf("%s",stud1.title);
      printf("Enter A author");
      scanf("%s",stud1.author);
      printf("Enter A gener");
      scanf("%s",stud1.genre) ;
      printf("\n %s",stud1.book);
      printf("\n %s",stud1.title);
      printf("\n %s",stud1.author);
      printf("\n %s",stud1.genre);
    getch();
  }




