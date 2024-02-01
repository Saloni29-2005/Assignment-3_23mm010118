#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three integer", a,b,c);
    scanf("\n%d\n%d\n%d",&a,&b,&c);
if (a>b)
{
    if (a>c)
    {
        printf("The largest number among the three is %d",a);
    }
    else
 {
        printf("The largest number among the three is %d",c);
    }
}
  else if (b>a)
  {
    if (b>c)
    {
        printf("The largest number among the three is %d",b);
    }
    else
    {
        printf("The largest number among the three is %d",c);
    }
 }
 else
 {
    printf("The largest number is %d",c);
 } 

 return 0;
}
