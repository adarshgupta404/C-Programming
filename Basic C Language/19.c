#include<stdio.h>
int main ()
{
int months, days ;
printf("Enter days:\t") ;
scanf("%d", &days) ;
months = days / 30 ; // will give you no. of months
days = days % 30 ; // remainder will give you no. of days
printf("Months : %d,\nDays : %d", months, days) ;
}