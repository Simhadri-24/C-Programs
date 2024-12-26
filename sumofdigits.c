/*Write a program to find the sum of the digits in the odd and even positions of a given number 
separately*/#include<stdio.h>
int main()
{
  int n,r,even_sum=0,odd_sum=0;
printf("\n enter the number");
scanf("%d",&n);
while(n>0)
   {
      r=n%10;
        if(r==2||r==4||r==6||r==8)
           { 
              even_sum=even_sum+r;
           }
         else
           {
            odd_sum=odd_sum+r;
            }
       n=n/10;
    }
    printf("sum of even numbers=%d",even_sum);
    printf("sum of odd numbers=%d",odd_sum);
    return 0;
}