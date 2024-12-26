/*Write a C program to get N number of students names using pointer array and print in descending order */
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,n,a;
    char name[10][10],temp[10];
    char (*ptr)[10];
    ptr=&name;
    printf("\n enter no of rows and columns");
    scanf("%d%d",&m,&n);
    printf("\n enter the names");
    for(i=0;i<m;i++)
    {
          scanf("%s",(ptr+i));
    }
    for(i=0;i<m;i++)   
    {      
        for(j=i+1;j<n;j++)
        {    
            if((strcmp(name[i],name[j]))<0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
for(i=0;i<m;i++)
{
printf("%s \n",name[i]);
}
return 0;
}