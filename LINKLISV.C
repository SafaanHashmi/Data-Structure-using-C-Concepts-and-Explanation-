//Data Structure Concepts Using C Lang. by Safaan
//Explanation of how link list are made manually using structures and pointers

//Before this goto LINKLIST.C
//THis program has one more entry of variable within structure i.e. 'name'


#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct std
{
  int roll;
  char name[20];
  struct std *next;    //*next is a pointer object 
};

void main()
{
  struct std *p;
  clrscr();
  p=(struct std *)malloc(sizeof(struct std)); //Initially DMA for p

  //to take input for roll no.and name
  printf("Enter roll no : ");
  scanf("%d",&p->roll);
  printf("Enter name : ");
  scanf("\n%[^\n]",&p->name);

  //now to access *next which is a variable of std
  //we use the object p

  p->next=(struct std *)malloc(sizeof(struct std));

   //Now we got one more memory block which is
   // linked through p and it belongs to next
   //now this block also has 2 variables i.e. roll and *next
   //Now we can make one more entry in the roll of next(i.e. new block)

  //to take input for roll no.
  printf("Enter roll no : ");
  scanf("%d",&p->next->roll);
  printf("Enter name : ");
  scanf("\n%[^\n]",&p->next->name);

  // the input will be given to variable roll
  // of next(i.e. new memory block)

  //now we go for next(variable) of next(new block)
  //and do DMA for it
  p->next->next=(struct std*)malloc(sizeof(struct std));

  //now we have 2nd new block which is linked through next
  //it aso have 2 variables roll and next
  //we will take input for roll

  //to take input for roll no.
  printf("Enter roll no : ");
  scanf("%d",&p->next->next->roll);
  printf("Enter name : ");
  scanf("\n%[^\n]",&p->next->next->name);


  //IN this way we formed a link list which
  // is capable of holding 3 entries
  //we can increase it further according to
  //our will i.e. p->next->next->next->next...

  printf("\nEnteries are -:\n\n");
  printf("Roll\tName \n%d\t%s\n%d\t%s\n%d\t%s\n",p->roll,p->name,p->next->roll,p->next->name,p->next->next->roll,p->next->next->name);
  printf("\n\n Hope you understood the concept --Safaan Hashmi");
  getch();
}

//Hope you understood the concept --Safaan Hashmi
