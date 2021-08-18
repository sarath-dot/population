#include<stdio.h>
#include"cs50.h"

 int main(void)
 {
     int x,y,years;

     do{
        x = get_int("Enter the start value= ");
     }
     while(x<9);


     do{
        y = get_int("Enter the end value= ");
     }
     while(y<=x);

     for(years = 0; x < y;years++)
     {
        x = x + (x/3) - (x/4);
     }
     printf("years passed=%i\n",years);
    }
