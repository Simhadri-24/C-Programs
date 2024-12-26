/*Design and develop a menu-driven
program using C to print the area
of different 2D objects such as
circle and trapezium and 3D objects
such as cylinder and sphere based
on the user’s choice fulfilling the
following conditions:
(i) using switch....case construct.
(ii) without using switch…case construct*/
#include<stdio.h>
int main()
{
int n,r,h,a,b,op;
float afc,aft,afcy,afs;
printf("\n 1.area of circle\t 2.area of trapezium \t 3.area of cylinder \t 4.area of sphere");
scanf("%d",&op);
switch(op)
{
    case 1:
        {
            printf("\n Enter the radius  ");
            scanf("%d",&r);
            afc=3.14*r*r;
            printf("\n area of circle=%f",afc);
            break;
        }
    case 2:
        {
            printf("enter a,b and h values  \n");
            scanf("%d%d%d",&a,&b,&h);
            aft=(a+b)*(h)/2;
            printf("\n area of trapezium=%f",aft);
            break;
        }
    case 3:
        {
            printf("\n enter the r,h values ");
            scanf("%d%d",&r,&h);
            afcy=2*3.14*r*(h+r);
            printf("\n area of cylinder=%f",afcy);
            break;
        }
    case 4:
        {
            printf("\n enter the radius");
            scanf("%d",&r);
            afs=4*3.14*r*r;
            printf("\n area of sphere=%f",afs);
            break;
        }
    }
    return 0;
}