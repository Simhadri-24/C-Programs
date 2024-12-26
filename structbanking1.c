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
 SB100 VenkatKrishna 4500.00 SB
 */
 #include<stdio.h>
#include<stdlib.h>
struct bankmgmt
{
    int accnumber,avlbalance;
    char custname[20],acctype[40];
}s;
int main()
{
    int op,withdraw,deposit;
    char ch;
    printf("\n enter the account number");
    scanf("%d",&s.accnumber);
    printf("\n enter the available balance");
    scanf("%d",&s.avlbalance);
    printf("\n enter the customer number");
    scanf("%s",s.custname);
    printf("\n enter the account type");
    scanf("%s",s.acctype);
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
                printf("\n enter the amount to withdraw");
                scanf("%d",&withdraw);
                if(s.avlbalance>withdraw)
                {
                    printf("\n amount with drawn is succesful");
                    s.avlbalance-=withdraw;
                    printf("\n remaining balance=%d",s.avlbalance);
                }
                else
                {
                    printf("\n insufficient balance");
                }
                break;
            }
            case 2:
            {
                printf("\n enter the amount to deposited");
                scanf("%d",&deposit);
                s.avlbalance+=deposit;
                printf("\n amount deposited succesful");
                printf("\n now the balance amount=%d",s.avlbalance);
                break;
            }
            case 3:
            {
                printf("\n customer name=%s",s.custname);
                printf("\n current available balance=%d",s.avlbalance);
                printf("\n account number=%d",s.accnumber);
                printf("\n account type=%s",s.acctype);
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