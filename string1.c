#include<stdio.h>
#include<ctype.h>
void stlength(char[],char[]);
void stcopy(char[],char[]);
void stcompare(char[],char[]);
void stconcen(char[],char[],char[]);
int main()
{
    char a[15],b[15],c[15];
    int i,j,op,ch;
    printf(" \n enter the 1st string ");
    gets(a);
    printf("\n enter thr 2nd string");
    gets(b);
    do
    {
    printf("\n 1: string length \t 2: string copy \t 3:string compare \t 4:string concatenation");
   printf("\n enter your option [1|2|3|4] \n");
   scanf("%d",&op);
   switch(op)
   {
     case 1:
            stlength(a,b);
            break;
     case 2:
            stcopy(a,b);
            break;
     case 3:
            stcompare(a,b);
            break;
     case 4:
            stconcen(a,b,c);
            break;
   } 
   printf("\n do you want to coninue y/n");
   scanf("%c",&ch);
  }while(ch=='y'||ch=='Y');
  return 0;
}
void stlength(char a[],char b[])
{
    int i=0,j=0,l1=0,l2=0;
    while(a[i] !='\0')
    {
        l1++;
        i=i+1;
    }
    printf("\n length of 1st string=%d",l1);
    while(b[j]!='\0')
    {
        l2++;
        j++;
    }
    printf("\n length of 2nd string=%d",l2);
}
void stcopy(char a[],char b[])
{
    int i=0;
    while(b[i]!='\0')
    {
       a[i]=b[i];
       i++;
    }
    a[i]='\0';
    printf("\n copied string is =%s",a);
}
void stcompare(char a[],char b[])
{
  int i=0,j;
  while(a[i]!='\0'&&b[i]!='\0')
  {
     if(a[i]==b[i])
      {
          j=0;
      }
     else if(a[i]>b[i])
      {
          j++;
          break;
      }
      else if(b[i]>a[i])
       {
           j=-1;
           break;
       }
       i++;
  }
     if(j==0)
     {
         printf("\n strings are equal");
     }
     else if(j>0)
     {
         printf("\n string 1 greater than string 2 ");
     } 
      else if(j==-1)
     {
         printf("\n string 2 is grater");
     }
 }
void stconcen(char a[],char b[],char c[])
{
    int i=0,j=0,k=0;
    while(a[i]!='\0')
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(b[j]!='\0')
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("\n concatenated string is ");
    puts(c);
}