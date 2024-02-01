#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    float m,n;
    printf("\nEnter the coordinates : x1,y1,x2,y2,x3,y3");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
m = (y2-y1)/(x2-x1);
n=(y3-y2)/(x3-x2);
if (m==n)
{
  printf("The given three points are collinear");
}
else
{
    printf("The given three points are not collinear");
}
    return 0;
}