/*Create a structure to specify data of customers in a bank. The data to be stored is Account number, Name, Balance in account. Assume maximum of 20 customers in the bank. Create a function to read all customers details and call it in main. The program must be menu driven with following options [hint: every option in separate
1. Print the Account number and name and
  balance of each customer.
2. Withdraw money
3. Deposit money 
4. Search Customer*/
#include<stdio.h>
#include<string.h>
struct customer
{
    int accno,balance;
    char name[20];
}s[20];
void read(struct customer[],int);
void printing(struct customer[],int);
void withdraw(struct customer[]);
void deposit(struct customer[]);
void search(struct customer[],int);
int main()
{
    int n,i,op,ch;
    printf("\n enter the number of customers \n");
    scanf("%d",&n);
    read(s,n);
    do
    {
        printf("1.customer details");
        printf("2.withdraw money");
        printf("3.deposit money");
        printf("4.search customer");
        printf("\n enter the option [1/2/3/4]");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printing(s,n);
                break;
            case 2:
                withdraw(s);
                break;
            case 3:
                deposit(s);
                break;
            case 4:
                search(s,n);
                break;
        }
        printf("do you want to continue y/n");
        scanf(" %c",ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}
void read(struct customer s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n enter the %d customer details",i+1);
        printf("\n enter the account number \n");
        scanf("&d",&s[i].accno);
        printf("\n enter the customer name \n");
        scanf("%s",s[i].name);
        printf("\n enter the balance");
        scanf("%d",&s[i].balance);
    }
}
void printing(struct customer s[],int n)
{
    int i;
    printf("______________________________________");
    printf(" sno \t accno \t name \t balance");
    printf("______________________________________");
    for(i=0;i<n;i++)
    {
        printf("%d \t %d \t %s \t %d",i+1,s[i].accno,s[i].name,s[i].balance);
    }
}
void withdraw(struct customer s[])
{
    int withdraw[20],i=0;
    printf("\n enter the amount to withdraw");
    scanf("%d",&withdraw[i]);
    if(s[i].balance>withdraw[i])
    {
        printf("\n amount with drawn is succesful");
        s[i].balance-=withdraw[i];
        printf("\n remaining balance=%d",s[i].balance);
    }
    else
    {
        printf("\n insufficient balance");
    }
}
void deposit(struct customer s[])
{
     int deposit[20],i=0;
     printf("\n enter the amount to deposited");
     scanf("%d",&deposit[i]);
     s[i].balance+=deposit[i];
     printf("\n amount deposited succesful");
     printf("\n now the balance amount=%d",s[i].balance);
}
void search(struct customer s[],int n)
{
    char se[20];
    int i;
    printf("enter the name to search");
    scanf("%s",se);
    for(i=0;i<n;i++)
    {
        if((strcmp(s[i].name,se))==0)
        {
            printf("element found ");
        }
        else
        {
            printf(" element not found");
        }
    }
}