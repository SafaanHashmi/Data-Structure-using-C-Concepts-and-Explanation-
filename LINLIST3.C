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

/* ab jo roll input lene ka kaam hai vo apan
   is function me daal dete hai */
  creat(p);
  printf("\nRoll\tName\n");
  print(p);
  getch();
}

void creat(struct std *s) //*s jo hai vo p se equate ho gya
{
  printf("Enter Roll= ");
  scanf("%d",&s->roll); //s->roll likha kyuki func ke ander p ka kaam s kar rha hai

  printf("Enter Name= ");
  scanf("\n%[^\n]",&s->name); //s->roll likha kyuki func ke ander p ka kaam s kar rha hai

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
   printf("%d\t%s\n",s->roll,s->name);
   print(s->next);
  }
}
