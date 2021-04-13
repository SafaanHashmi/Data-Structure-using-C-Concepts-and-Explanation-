//Data Structure Concepts Using C Lang. by Safaan
//Explanation of various operations on Link List using structures and pointers

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void front(struct std *temp);
void back(struct std *temp);
void traver(struct std *temp);

struct std
{
   int roll;
   struct std *next;
};

void main()
{
   struct std *pemp=NULL;
   int a;
   clrscr();

   pemp=(struct std *)malloc(sizeof(struct std));

   printf("Enter -: \n");
   while(a!=0)
   {
     printf("1 for Insert in front \n2 for Insert in last\n3 for Traverse\n0 to exit\n");
     scanf("%d",&a);
     switch(a)
     {
	case 1:
	  front(&pemp);
	  break;
	case 2:
	  back(&pemp);
	  break;
	case 3:
	  traver(pemp);
	  break;
	case 0:
	  printf("BYE BYE THANK YOU");
	  break;
	default:
	  printf("Invalid Input");
     }
   }
   printf("Hope you understood the concept. --Safaan Hashmi");
   getch();
}

void front(struct std **temp)
{
   struct std *nw;
   nw=(struct std *)malloc(sizeof(struct std));

   printf("Enter Roll = ");
   scanf("%d",&nw->roll);

   nw->next=*temp;
   *temp=nw;
}

void back(struct std **temp)
{
   struct std *nw;
   struct std *last=*temp;
   nw=(struct std *)malloc(sizeof(struct std));


   printf("Enter Roll = ");
   scanf("%d",&nw->roll);

   if(*temp==NULL)
   {
     *temp=nw;
   }
   else
   {
      while(last->next!=NULL)
	last=last->next;

      last->next=nw;
   }
}

void traver(struct std *temp)
{
 // printf("Roll no are -: %d\n",temp->roll);

  while(temp->next!=NULL)
  {
   printf("Roll no are -: %d\n",temp->roll);
   temp=temp->next;
  }
   printf("Roll no are -: %d\n",temp->roll);

}
