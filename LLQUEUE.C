//Data Structure Concepts Using C Lang. by Safaan
//Explanation of how link list are made with application of Queue (First In First Out)

//PREVIOUS PROG = LLSTACK.C
//Here we form a LinkList with application of queue
#include<conio.h>
#include<alloc.h>
void enq();
void deq();
void traver();
struct std
{
  int roll;
  struct std *next;
}*front=NULL,*rear=NULL;

void enq()
{
  struct std *p;
  p=(struct std *)malloc(sizeof(struct std));
  printf("Enter Roll No. -: ");
  scanf("%d",&p->roll);
  if(front==NULL && rear==NULL)
  {
   front=rear=p;
   return;
  }
  else
  {
  rear->next=p;
  rear=p;
  }
}

void deq()
{
  struct std *p;
  p=front;
  if(front==NULL) //when no node
  {
    printf("\nThe list is empty\n\n");
    return;
  }
  else if(front==rear)  //when only 1 node
  {
    front=rear=NULL;
  }
  else           //when more then 1 node
  {
    front=front->next;
  }
  free(p);
}

void traver()
{
 struct std *p;
 p=front;
 printf("\nThe values are -:\n");
 while(p->next!=NULL)
 {
   printf("%d\t",p->roll);
   p=p->next;
 }
 printf("%d\n\n",p->roll);
}

void main()
{
  int a;
  clrscr();
  printf("Enter -: \n");
  while(a!=0)
  {
    printf("1 for Insert\n2 for Delete\n3 for Traverse\n0 to exit\n");
    scanf("%d",&a);
    switch(a)
    {
	case 1:
	  enq();
	  break;
	case 2:
	  deq();
	  break;
	case 3:
	  traver();
	  break;
	case 0:
	  printf("BYE BYE THANK YOU");
	  break;
	default:
	  printf("Invalid Input");
    }
  }
  printf("\n\nHope you understood the concept.   --Safaan Hashmi");
  getch();
}


