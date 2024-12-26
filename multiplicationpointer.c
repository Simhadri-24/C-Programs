#include<stdio.h>
void matmut(int (*)[5],int (*)[5],int,int,int,int);
int main()
{
    int a[5][5],b[5][5];
    //int *p,*p1;
    //p=&a[0][0];
    //p1=&b[0][0];
    int (*p)[5];
    int (*p1)[5];
    p=&a[0][0];
    p1=&b[0][0];
    int r,c,r1,c1,i,j;
    printf(" m1 enter the number of rows");
    scanf("%d",&r);
    printf(" m1 enter the number of colums");
    scanf("%d",&c);
    printf(" m2 enter the number of rows");
    scanf("%d",&r1);
    printf(" m2 enter the number of colums");
    scanf("%d",&c1);
    if(c!=r1||c>r1)
    printf("matrix cant be done");
    else
    {
    printf("enter the elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf(" %d",(*(p+i)+j));
        }
    }
    printf("enter the elements 2 ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf(" %d",(*(p1+i)+j));
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",*(*(p1+i)+j));
        }
        printf("\n");
    }
    matmut(p,p1,r,c,r1,c1);
    }
    return 0;
}
void matmut(int (*a)[5],int (*b)[5],int r,int c,int r1,int c1)
    {
        int c2[r][c1];
        int (*p3)[c1];
        int i,j;
        p3=&c2[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            *(*(p3+i)+j)=0;
            for(int k=0;k<c;k++)
            {
                (*(*(p3+i)+j))+=((*(*(a+i)+k)) * ((*(*(b+k)+j))));
            }
        
        }
    }
    printf("the multiplied matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" %d ",*(*(p3+i)+j));
        }
        printf("\n");
    }
    }