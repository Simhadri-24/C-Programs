/*Write a program to create two arrays with minimum five elements each. Merge the arrays to a new array in such a way that first array may be copied as it is and reverse only the second array and merge it. Perform sorting in the new array and print it. Implement the same by passing appropriate arrays to functions. Below is the sample output.
Sample I/P and O/P 
Enter the number of elements for First Array : 4 
Enter the elements for First Array : 4 13 12 1 
Enter the number of elements for Second Array : 4
 Enter the elements for Second Array : 6 7 8 9 
Elements After Merging 4 13 12 1 9 8 7 6 
The sorted elements are 1 4 6 7 8 9 12 13*/
#include<stdio.h>
void merg(int[],int[],int[],int,int);
void sort(int[],int,int,int);
int main()
{
    int a[10],b[10],c[20],i,j,k,n,temp,m;
    printf("\n enter the number of elements in the first array:");
    scanf("%d",&n);
    printf("\n enter the elements for first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the number of elements for second array:");
    scanf("%d",&m);
    printf("\n enter the elements for second array:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    merg(a,c,b,m,n);
    sort(c,m,n,temp);
    return 0;
}
void merg(int a[],int c[],int b[],int m,int n)
{
    int i,j,k;
    for(i=0,j=0;i<n;i++,j++)
    {
        c[j]=a[i];
    }
    for(i=m-1;i>=0;i--,j++)
    {
        c[j]=b[i];
    }
    printf("\n elements after merging:");
    for(k=0;k<(m+n);k++)
    {
        printf("%d ",c[k]);
    }
}
void sort(int c[],int m,int n,int temp)
{
    int i,j,k;
    for(i=0;i<(m+n);i++)
    {
        for(j=i+1;j<(m+n);j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n the sorted elements are:");
    for(k=0;k<(m+n);k++)
    {
        printf("%d ",c[k]);
    }
}