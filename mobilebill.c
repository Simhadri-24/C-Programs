/*A Mobile Service provider has to calculate the monthly bill for his Postpaid customer.The tariff of the bill is as follows.
a) The fixed charge/Month is Rs.200
b) The First 200 phones calls are free every month
c) The next 300 calls are charged at the rate of 1/minute
d) And rest calls (after 500 calls or minutes) are charged at the rate of 2/minute
  Write a C program to read the Customer ID, Name, and the number of calls.Pass the data to a function that calculates the bill amount and returns it to the main function. The main function has to display the monthly bill along with the customer ID and Customer Name   */
#include<stdio.h>
void bill(int,int);
int main()
{
    int cid,amount=200,n,i;
    char a[10];
    printf("\n enter customer id");
    scanf("%d",&cid);
    printf("\n enter customer name");
    scanf("%s",a);
    printf("\n enter number of minutes");
    scanf("%d",&n);
    bill(n,amount);
    return 0;
}
void bill(int n,int amount)
{
    int i,qmount;
    amount=200;
    if(n<=200)
        amount=amount+0;
    else if(n>200&&n<=500)
        amount=amount+(n-200);
    else
    {
        for(i=201;i<=500;i++)
        {
            amount=amount+1;
        }
        for(i=500;i<n;i++)
        {
            amount=amount+2;
        }
    }
    printf("%d",amount);
}