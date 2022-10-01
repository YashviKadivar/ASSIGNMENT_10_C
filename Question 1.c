/* Write a function to calculate the area of a circle. (TSRS)   */

#include<stdio.h>

float area(float);

int main()
{
    float x,y;

    printf("\n Enter radius->");
    scanf("%f",&x);

    y=area(x);

    printf("\n area of circle is =%f",y);

    return 0;
}

float area(float r)
{
   float y;

   y=3.14*r*r;

   return(y);
}
