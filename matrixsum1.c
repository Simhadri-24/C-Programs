/*Write a program to create a two dimensional array with elements of your wish. Pass the array to the function and find the sum of each row and store to an array(say array1) and find the sum of each column and store to another array(say array2 ) and print both the arrays(array1 and array2)*/
#include<stdio.h>
void sum(int [5][5],int,int);
int main()
{
    int a[5][5],m,n;
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("enter the number of columns:");
    scanf("%d",&n);
    sum(a,m,n);
    return 0;
}
void sum(int a[5][5],int b,int c)
{
    int i,j,e[5],f[5];
    printf("\n enter the matrix elements \n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        e[i]=0;
        for(j=0;j<c;j++)
        {
            e[i]+=a[i][j];
        }
    }
    for(j=0;j<c;j++)
    {
        f[j]=0;
        for(i=0;i<b;i++)
        {
            f[j]+=a[i][j];
        }
    }
    printf("The sum of rows is:");
    for(i=0;i<b;i++)
    printf("%d ",e[i]);
    printf("\n");
    printf("The sum of columns is:");
    for(i=0;i<c;i++)
    printf("%d ",f[i]);
}