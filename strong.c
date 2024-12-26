/*Write a C Program to partition an array into subarrays for the following scenario: There is a data array with 12 elements with integer values. If the number is a strong number extract the number and insert into an array called strong. If the number is not a strong number extract the number and insert into array called not_strong array. A number is strong if its sum of factorial of individual digits equals to the number. 
    For example: If input n=145 1! + 4! + 5! = 145. 145 then 145 is a strong number*/

#include<stdio.h>
int fact(int);
int main()
{
    int a[12],i,strong[12],not_strong[12],sum=0,rem,temp,m=0,n=0,x;
    printf("enter size\n");
    scanf("%d",&x);
    printf("enter arrray elements\n");
    for(i=0;i<x;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        sum=0;
        temp=a[i];
        while(a[i]!=0)
      {
        rem=a[i]%10;
        sum=sum+fact(rem);
        a[i]=a[i]/10;
      }
        if(sum==temp)
        {
            strong[m]=temp;
            m++;
        }
        else
        {
            not_strong[n]=temp;
            n++;
        }
    }
    printf("strong  array is  ");
    for(i=0;i<m;i++)
    {
        printf("%d ",strong[i]);
    }
    printf("\nnot strong array is  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",not_strong[i]);
    }
    return 0;
}
int fact(int rem)
{
    if(rem==0||rem==1)
    {
        return 1;
    }
    else
    {
    return (rem*fact(rem-1));
    }
}