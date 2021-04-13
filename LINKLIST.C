//Data Structure Concepts Using C Lang. by Safaan
//Explanation of how link list are made manually using structures and pointers

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct std
{
  int roll;
  struct std *next;    //*next is a pointer object
};

void main()
{
  struct std *p;
  clrscr();
  p=(struct std *)malloc(sizeof(struct std)); //Initially DMA for p

  //to take input for roll no.
  printf("Enter roll no : ");
  scanf("%d",&p->roll);

  //now to access *next which is a variable of std
  //we use the object p

  p->next=(struct std *)malloc(sizeof(struct std));

   //Now we got one more memory block which is
   // linked through p and it belongs to next
   //now this block also has 2 variables i.e. roll and *next
   //Now we can make one more entry in the roll of next(i.e. new block)

  //To take input for roll no.
  printf("Enter roll no : ");
  scanf("%d",&p->next->roll);
  // the input will be given to variable roll
  // of next(i.e. new memory block)

  //now we go for next(variable) of next(new block)
  //and do DMA for it
  p->next->next=(struct std*)malloc(sizeof(struct std));

  //now we have 2nd new block which is linked through next
  //it aso have 2 variables roll and next
  //we will take input for roll

  //To take input for roll no.
  printf("Enter roll no : ");
  scanf("%d",&p->next->next->roll);

  //In this way we formed a link list which
  // is capable of holding 3 entries

  printf("Enteries are -:\n");
  printf("%d\n%d\n%d\n",p->roll,p->next->roll,p->next->next->roll);
  getch();
}

//Hope you understood the concept. --Safaan Hashmi
