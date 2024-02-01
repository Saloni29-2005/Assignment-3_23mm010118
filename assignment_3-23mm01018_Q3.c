#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangle",a,b,c);
    scanf("%d%d%d", &a,&b,&c);
    /*sum of any two sides of triangle is always greater tha the third side*/
    if (a+b > c)
    {
        if (b+c>a)
        {
            if (c+a >b)
            {
                printf("The given sides forms a triangle");
            }
        }
        
    }
   else
   {
    printf("The given sides do not forms a triangle");
   }
    
    return 0;
}
