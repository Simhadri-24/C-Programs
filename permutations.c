/*Write a program to print all permutations
 of a given string (Get the string from the
 user)*/
#include <stdio.h>
#include <string.h>
void swap(char* i, char* j)
{
    char temp;
    temp = *i;
    *i= *j;
    *j= temp;
}
void permute(char* a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n", a);
    else
      {
        for (i = l; i <= r; i++) 
          {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i));
          }
      }
}
int main()
{
    char a[20];
    int i,n;
    printf("enter the string");
    scanf("%s",a);
    n=strlen(a);
    permute(a,i,n - 1);
    return 0;
}