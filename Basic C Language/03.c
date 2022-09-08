// Calculator program:
#include<stdio.h>
#include<conio.h>
int main ()
{
    char operator;
    double n1, n2, result;
    printf("\nEnter an operator: ");
    scanf("%c", &operator);
    printf("\nEnter number 1: ");
    scanf("%lf",&n1);
    printf("\nEnter number 2: ");
    scanf("%lf",&n2);
switch (operator)
{
case '+':
    result=n1+n2;
    printf("\nresult: %lf",result);
    break;
case '-':
    result=n1-n2;
    printf("\nresult: %lf",result);
    break;
case '*':
    result=n1*n2;
    printf("\nresult: %lf",result);
    break;
case '/':
    if (n2==0.0)
    {
        printf("Not Defined.");
    }
    else  
    { 
        result=n1/n2;
        printf("\nresult: %lf",result);
    }
    break;
default:
    printf("\n%c is not a valid operator.");
    break;
}
getch();
return 0;
}