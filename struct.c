//Example for structure
#include <stdio.h>
#include <math.h>
struct distance
{
    int x1,x2,y1,y2;
    float d;
}s1;
int main()
{
    printf("Enter X1 and Y1 values: ");
    scanf("%d%d",&(s1.x1),&(s1.y1));
    printf("Enter X2 and Y2 values: ");
    scanf("%d%d",&(s1.x2),&(s1.y2));
    s1.d = sqrt(pow((s1.x2-s1.x1),2)+pow((s1.y2-s1.y1),2));
    printf("Distance: %f\n", s1.d);
    return 0;
}