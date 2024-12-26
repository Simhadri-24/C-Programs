/* Write a C program to count the number of non-zero elements and sum of upper triangular in a two-dimensional matrix using function. [Hint function should accept 2D array as argument*/
#include<stdio.h>
void matrix(int[5][5],int,int,int);
int main()
{
  int m,n,i,j,sum=0,a[5][5];
  printf("enter row size and column size\n");
  scanf("%d%d",&m,&n);
matrix(a,m,n,sum);
return 0;
}
void matrix(int a[5][5],int m,int n,int sum)
{
    int i,j,count=0;
    printf("enter arrray elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                count++;
            }
         if(i<j)
         {
             sum=sum+a[i][j];
         }
        }
    }
    printf("no of non zero elements are=%d\n",count);
    printf("sum of upper triangular elements are=%d\n",sum);
}