/*Given a matrix of size m x n with values 
ranges from 100 to 150. Write a C program 
to generate a 0-1 matrix based on the 
threshold value of 125. If the matrix 
element is greater than the threshold,
set the  element to 1 else set the element
 to 0. Print the input matrix and the generated 0-1 matrix. (Use function with 2D array and threshold as arguments)                                                                                                                                              Sample Input:
Input matrix: 
120 117 136
110 150 128
135 114 149
Sample Output:
Generated 0-1 matrix: 
0 0 1
0 1 1
1 0 1*/
#include<stdio.h>
int main()
{
int a[3][3],b[3][3],m,n,i,j;
printf("enter row and column size");
scanf("%d%d",&m,&n);
printf("enter the array elements \n");
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
      if(a[i][j]>125)
        {
          b[i][j]=1;
        }
      else
        {
          b[i][j]=0;
        }
        
    }
}
printf(" matrix is \n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    {
     printf("%d\t",b[i][j]);
    }
    printf("\n");
}
return 0;
}