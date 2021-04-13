//Data Structure Concepts Using C Lang. by Safaan Hashmi
//Explanation of how link list are made manually using structures and pointers.

// Another method of forming a link listmanually by simply connecting different
// pointer objects and doing DMA for eah point obj(first,second,third) rather 
// than for next.
// But next is used to connect them.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct std
{
  int roll;
  struct std *next;
};

void main()
{
  struct std *first;
  struct std *secon;
  struct std *third;
  clrscr();
  first=(struct std *)malloc(sizeof(struct std));
  first->roll=1;
  first->next=secon;

  secon=(struct std *)malloc(sizeof(struct std));
  secon->roll=2;
  secon->next=third;

  third=(struct std *)malloc(sizeof(struct std));
  third->roll=3;
  third->next=NULL;


  printf("Data -: \n First = %d\t Second= %d\t Third= %d",first->roll,secon->roll,third->roll);
  printf("\n\nHope you understood the concept.   --Safaan Hashmi");
  getch();

}
