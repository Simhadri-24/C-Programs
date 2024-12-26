/*Given an integer matrix with size M x N with odd and even numbers, separate the even and odd numbers and store in two 1D arrays (Odd & Even). After separation sort two 1D arrays in ascending order
     Sample input: 
      2 	 9	 12 
      15	 16 	24
    	5 	  5	 7
   Sample output: 
   Odd[] = 5 7 9 15 25
   Even[] = 2 12 16 24*/
   
#include<stdio.h>
int main()
{
    int a[5][5],m,n,i,j,k=0,l=0;
    int odd[25],even[25];
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("enter the number of columns:");
    scanf("%d",&n);
    printf("Enter the elements:");
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    odd[l]=0;
    even[k]=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            {
                even[k]=a[i][j];
                k++;
            }
            else
            {
                odd[l]=a[i][j];
                l++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(even[i]>even[j])
            {
                int temp=even[j];
                even[j]=even[i];
                even[i]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(odd[i]>odd[j])
            {
                int temp=odd[j];
                odd[j]=odd[i];
                odd[i]=temp;
            }
        }
    }
    printf("Odd[]=");
    for(i=0;i<l;i++)
    printf("%d ",odd[i]);
    printf("\n");
    printf("Even[]=");
    for(i=0;i<k;i++)
    printf("%d ",even[i]);
    return 0;
}