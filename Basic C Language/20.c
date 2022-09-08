#include<stdio.h>  
int main()    
{    
int x=25, y=35;      
printf("x=%d y=%d", x, y);      
x= x + y;
y = x - y;
x = x - y; 
printf("\nSwaped:  x=%d y=%d",x,y);    
return 0;  
} 