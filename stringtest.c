#include<stdio.h>
int main()
{
    char a[10],b[10],c[30];
    int l,i;
    printf("\n enter 1st string");
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
       c[l]=a[i];
       l++;
       i++;
    }
    else
    {
       c[l]=b[i];
       i++;
       l++;
    }
}
    
    