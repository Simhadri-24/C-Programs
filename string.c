//String operations
#include<stdio.h>
#include<ctype.h>
void stlength(int[],int[]);
void stcopy(int[],int[],int[]);
void stcompare(int[],int[]);
void stconcen(int[],int[]);
int main()
{
    int a[15],b[15],c[15],i,j,op;
    printf(" \n enter the 1st string ");
    gets(a);
    printf("\n enter thr 2nd string");
    gets(b);
    printf("\n 1: string length \t 2: string copy \t 3:string compare \t 4:string concatenation");
    printf("\n enter your option [1|2|3|4]");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            stlength(a,b);
            break;
        case 2:
            stcopy(a,b,c);
            break;
        case 3:
            stcompare(a,b);
            break;
        case 4:
            stconcen(a,b);
            break;
    }        
    return 0;
}
void stlength(int a[],int b[])
{
    int l1=0,l2=0,i=0,j=0;
    while(a[i]!='\0')
    {
        l1++;
        i++;
    }
    printf("\n length of 1st string=%d",l1);
    while(b[j]!='\0')
    {
        l2++;
        j++;
    }
    printf("\n length of 2nd string=%d",l2);
}
void stcopy(int a[],int b[],int c[])
{
    int i=0,j=0,l1,l2,k=0,a[15],b[15],c[15];
    for(i=0;i<l1;i++)
    {
      c[k]=a[i];
      k++;
    }
    for(j=0;j<l2;j++)
    {
        c[k]=b[i];
    }
    c[k]='\0';
    printf("\n copied string is ");
    puts(c);
}
void compare(int a[],int b[])
{
    int i,j;
    for(i=0;a[i]==b[j]&&a[j]!='\0';i++)
    {
        if(a[i]>b[j])
        {
            printf("\n string 2 less than string 1");
        }
        else if(a[i]<b[j])
        {
            printf("\n string 1 less than string 2");
        }
        else
        {
            printf("\n string 1 equal string 2");
        } 
    }
}
void stconcen(int a[],int b[])
{
    int i,j,k,c[10];
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