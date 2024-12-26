/*Createa Structure called BankMgmt with AccNumber, CustName, AvlBalance,AccType as members
 Implement a Bank management Application as menu driven program for the   above said Structure
 scenario.
Menu Option:
 1.Withdrawal
 2.Deposit
 3.Display Balance
 4.Exit
If option 
 1 is chosen-
 Amount can be withdrawn from the account(Withdrawn amount should be 
 given as input). For withdrawal the condition is- the AvlBalance must be 
 greater than withdrawn amount).
 2 is chosen-
 Amount can be deposited to the account (the deposited amount should be 
 given as input). The deposited amount should be reflected in AvlBalance of 
 the account.
 3 is chosen
 Current available balance(AvlBalance) of the AccNumber should be 
 Displayed with other details
4 is chosen 
 Exit from the application
Sample Input:
 SB100 VenkatKrishna 4500.00 SB#include<stdio.h>*/
#include<stdlib.h>
struct bankmgmt
{
    int accnumber,avlbalance;
    char custname[20],acctype[40];
}s[20];
int main()
{
    int op,withdraw[20],deposit[20],n,i;
    char ch;
    printf("\n enter the no of customers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\n enter the %d customer details",i+1);
    printf("\n enter the account number");
    scanf("%d",&s[i].accnumber);
    printf("\n enter the available balance");
    scanf("%d",&s[i].avlbalance);
    printf("\n enter the customer number");
    scanf("%s",s[i].custname);
    printf("\n enter the account type");
    scanf("%s",s[i].acctype);
    }
    do
    {
        printf("\n 1.withdrawel");
        printf("\n 2.deposit");
        printf("\n 3.display balance");
        printf("\n 4.exit");
        printf("\n enter your option[1/2/3/4]");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            {
                for(i=0;i<n;i++)
                {
                  printf("\n enter the %d customer details",i+1);
                  printf("\n enter the amount to withdraw");
                  scanf("%d",&withdraw[i]);
                  if(s[i].avlbalance>withdraw[i])
                  {
                    printf("\n amount with drawn is succesful");
                    s[i].avlbalance-=withdraw[i];
                    printf("\n remaining balance=%d",s[i].avlbalance);
                  }
                  else
                  {
                    printf("\n insufficient balance");
                  }
                }
                break;
            }
            case 2:
            {
                for(i=0;i<n;i++)
                 {
                printf("\n enter the amount to be deposited");
                scanf("%d",&deposit[i]);
                s[i].avlbalance+=deposit[i];
                printf("\n amount deposited succesful");
                printf("\n now the balance amount=%d",s[i].avlbalance);
                 }
                break;
            }
            case 3:
            {
                for(i=0;i<n;i++)
                 {
                printf("\n customer name=%s",s[i].custname);
                printf("\n current available balance=%d",s[i].avlbalance);
                printf("\n account number=%d",s[i].accnumber);
                printf("\n account type=%s",s[i].acctype);
                 }
                break;
            }
            case 4:
            {
                printf("\ exit from application");
                exit(0);
                break;
                
            }
        }
        printf("\n enter the yes/no to continue");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}