/*Write a program to create an array of
 structure for maintaining the details of
 20 cricket  player which includes player
 name, age, number of matches, total run,
 and average runs  by the player. Create 
 a main function for reading the details 
 of 5 cricket player, find the average run
 scored by the player and display all 
 details of the player.*/
#include <stdio.h>
int main()
{
 struct cricket
 {
  int age,matches,runs,avg;
  char name[20];
 }c[5];
 int i=0;
 for(i=0;i<5;i++)
 {
 printf("enter name of %d player\n",i+1);
 scanf("%s",c[i].name);
 printf("enter the age\n");
 scanf("%d",&c[i].age);
 printf("enter no of matches played\n");
 scanf("%d",&c[i].matches);
 printf("enter runs scored\n");
 scanf("%d",&c[i].runs);
 }
 for(i=0;i<5;i++)
 {
  c[i].avg=c[i].runs/c[i].matches;   
 }
printf("________________________________");
printf("name \t matche \t age \t runs \t average");
for(i=0;i<5;i++)
 {
   printf("_____________________________________");
   printf("%s \t %d \t",c[i].name,c[i].matches);
   printf("%d \t %d \t",c[i].age,c[i].runs,c[i].avg);
   printf("__________________________________");
  }
  return 0;
}