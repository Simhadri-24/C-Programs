#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[10],b[10],c[30];
    int l,i,k;
    printf("\n  1st string");
    gets(a);
    printf("\n enter 2nd string");
    gets(b);
    while(a[l]!='\0')
    {
        l++;
    }
    while(b[i]!='\0')
    {
        i++;
    }
    if(l>i)
    {
       a[l]=b[i];
       l++;
       i++;
    }
    else
    {
       b[i]=a[l];
       i++;
       l++;
    }
    a[l]='\0';
    b[i]='\0';
    while(a[l]=='\0')
    {
     c[k]=a[l];
     k++;
     l++;
    }
    while(b[i]=='\0')
    {
      c[k]=b[i];
      k++;
      i++;
    }
    c[k]='\0';
    return 0;
}