//Data Structure Concepts Using C Lang. by Safaan
//Explanation of how link list are made manually using structures and pointers

// Before this goto LINLIST2.C
//Similar to LINLIST2 but with an additional
//entry of name.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct std
{
  int roll;
  char name[20];
  struct std *next;
};

void main()
{
  struct std *p;
  void creat(struct std *s);
  void print(struct std *s);
  clrscr();
  p=(struct std*)malloc(sizeof(struct std));


  creat(p);
  printf("\nRoll\tName\n");
  print(p);
  printf("Hope you understood the concept. --Safaan Hashmi");
  getch();
}

void creat(struct std *s) 
{
  printf("Enter Roll= ");
  scanf("%d",&s->roll); 

  printf("Enter Name= ");
  scanf("\n%[^\n]",&s->name); 



   if(s->roll==0) 
   {
    s->next=NULL;  //s->next  Null assign 
   }
   else            //else DMA for 'next'  
   {
     s->next=(struct std*)malloc(sizeof(struct std));
     creat(s->next);
   }
}

void print(struct std *s)
{

  if(s->next!=NULL)
  {
   printf("%d\t%s\n",s->roll,s->name);
   print(s->next);
  }
}
