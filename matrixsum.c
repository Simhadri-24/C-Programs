//Addition of matrix 
#include<stdio.h>
void sum(int [5][5],int,int);
int main()
{
    int a[5][5],r,c;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of columns:");
    scanf("%d",&c);
    sum(a,r,c);
    return 0;
}
void sum(int a[5][5],int b,int c)
{
    int i,j,e[5],f[5];
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