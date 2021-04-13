//PREVIOUS PROG = LINLIST3.C
//Here we form a LinkList with application of stack
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void push();
void pop();
voied traver();
struct std
{
  int roll;
  struct std *next;
}*top=NULL;

void push()
{
  struct std *p;
  p=(struct std *)malloc(sizeof(struct std));
  printf("Enter Roll - ");
  scanf("%d",&p->roll);
  p->next=top;
  top=p;
}

void pop()
{
  struct std *p;
  p=top;
  printf("The top most value is - %d \n",p->roll);
  top=p->next; // or  top=top->next;
  free(p);
}

void traver()
{
  struct std *p;
  p=top;
  printf("The values are -:\n");
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
	push();
	break;
      case 2:
	pop();
	break;
      case 3:
	traver();
	break;
      case 0:
	printf("\n\tBYE BYE THANK YOU");
	break;
     default:
	printf("Invalid Input");
    }
  }
  getch();
}


