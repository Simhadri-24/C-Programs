#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int l,i,vowels=0,consonants=0,A=0,I=0,U=0,S=0,T=0,R=0,N=0,V=0,E=0,Y=0,frequency[35];
    printf("\n Enter a String :");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='A')
        {
            vowels++;
            A++;
            i++;
        }
        else if(a[i]=='I')
        {
            vowels++;
            I++;
            i++;
        }
        else if(a[i]=='U')
        {
            vowels++;
            U++;
            i++;
        }
        else if(a[i]=='S')
        {
           consonants++;
           S++;
           i++;
        }
        else if(a[i]=='T')
        {
            consonants++;
            T++;
            i++;
        }
        else if(a[i]=='R')
        {
            consonants++;
            R++;
            i++;
        }
        else if(a[i]=='N')
        {
           consonants++;
           N++;
           i++;
        }
        else if(a[i]=='V')
        {
            consonants++;
            V++;
            i++;
        }
        else if(a[i]=='E')
        {
            consonants++;
            E++;
            i++;
        }
        else if(a[i]=='Y')
        {
           consonants++;
           Y++;
           i++;
        }
    }
    printf("\n no of vowels: %d",vowels);
    printf("\n frequency of occurence:  ");
    if(a[i]=='A'||a[i]=='U'||a[i]=='I')
    {
        for(i=0;i<l;i++)
        {
            printf("%c-%d;",a[i],frequency[i]);
        }
    }
    printf("\n no of consonants: %d",consonants);
    printf("\n frequency of occurence: ");
    if(a[i]=='S'||a[i]=='T'||a[i]=='R'||a[i]=='N'||a[i]=='V'||a[i]=='E'||a[i]=='Y')
    {
       for(i=0;i<l;i++)
        {
            printf("%c-%d;",a[i],frequency[i]);
        }
    }
    return 0;
}