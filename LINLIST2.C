// Before this goto LINKLISV.C
// As in previous program we have seen that
// we have to keep on adding ->next->next to
// get new entries but it is difficult and
// inappropriate to do this at the compile time
// So here we use a function which add 1 ->next
// each time with the help of recurssion.

//MORE explaination regarding the scope of variables
//in LINK2EXP.C

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
  struct std *p;
  void creat(struct std *s);
  void print(struct std *s);
  clrscr();

  printf("Enter roll no. as 0 to exit");

  p=(struct std*)malloc(sizeof(struct std));

  /* ab jo roll input lene ka kaam hai vo apan
  is function me daal dete hai */
  creat(p);

  /* After the completion of print funct. the the p is already set
     to the first node while the entries is inserted with the help
     of formal variable s.   */

  print(p);
  getch();
}

void creat(struct std *s)   //*s jo hai vo p se equate ho gya
{
  printf("Enter Roll= ");
  scanf("%d",&s->roll); //s->roll likha kyuki func ke ander p ka kaam s kar rha hai

  /*Ab 'next' ka dma karne ke liye
   apan recurssion ki madat lenge */

   if(s->roll==0)   //Agar input 0 mila to
   {
    s->next=NULL;  //s->next me Null assign hoga
   }
   else            //else 'next' ka DMA kar dega
   {
     s->next=(struct std*)malloc(sizeof(struct std));
     creat(s->next);

      //Recurssion kara
      /*ab creat func call kara magar pass kara hai
      s->next matlab s ki jagah jayega s->next jis
      kaaran scanf me jayega s->next->roll ,Aise hi
      next turn par s ho jaega s->next->next.*/
   }
}

void print(struct std *s)
{
  if(s->next!=NULL)
  {
   printf("Roll no are -: %d\n",s->roll);
   print(s->next);
  }
}



//OR

//Making p as global pointer object

/*
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct std
{
  int roll;
  struct std *next;
}*p;

void main()
{
  void creat();
  void show();
  clrscr();

  creat();
  show();

  getch();

}

void creat()
{
  p=(struct std *)malloc(sizeof(struct std));
  printf("Enter - ");
  scanf("%d",&p->roll);

  if(p->roll==0)
  {
    p->next=NULL;
  }
  else
  {
    p->next=(struct std *)malloc(sizeof(struct std));
    p=p->next;
    creat();
  }
}

void show()
{
  if(p->next!=NULL)
  {
   printf("Roll - %d",p->roll);
   p=p->next;
   show();
  }
}
*/


/*
#include<stdio.h>
#include<conio.h>
int a=5;
void main()
{
   void one();
   clrscr();

   one();
   getch();
}
void one()
{
  printf("A = %d\n",a);
  a=a+1;
  if(a<10)
  {
    one();
  }
}
*/