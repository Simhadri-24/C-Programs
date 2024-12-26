#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="sastra university";
    int vowel=0,consonant=0,n,i,j,b[20]={0};
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                vowel++;
            else
                consonant++;
            if(a[i]==a[j])
                b[i]++;
        }
    }
    printf("no of vowels=%d",vowel);
    printf("no of  consonants=%d,consonant");
    for(i=0;i<n;i++)
    {
        printf("%s found %d times",a[i],b[i]); 
    }
    return 0;
}