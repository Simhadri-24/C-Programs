#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int l,i,vowels=0,consonants=0,A=0,I=0,U=0,S=0,T=0,R=0,N=0,V=0,E=0,Y=0,frequency[35];
    printf("\n enter the string ");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='A'||a[i]=='I'||a[i]=='U')
        {
            vowels++;
            A++;I++;U++;
            i++;
        }
       else 
       {
           consonants++;
           S++;T++;R++;N++;V++;E++;Y++;
           i++;
       }
    }
    printf("\n no of vowels: %d",i);
    printf("\n frequency of occurence:  ");
    if(a[i]=='A'||a[i]=='U'||a[i]=='I')
    {
        for(i=0;i<l;i++)
        {
            printf("%c%d",a[i],frequency[i]);
        }
    }
    printf("\n no of consonants: %d",consonants);
    printf("\n frequency of occurence: ");
    if(a[i]=='S'||a[i]=='T'||a[i]=='R'||a[i]=='N'||a[i]=='V'||a[i]=='E'||a[i]=='Y')
    {
        for(i=0;i<l;i++)
        {
            printf("%c%d",a[i],frequency[i]);
        }
    }
    return 0;
}