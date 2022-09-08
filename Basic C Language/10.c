//enums
#include<stdio.h>
enum Day{Sun = 1, Mon = 2, Tue = 3,Wed = 4,Thu = 5,Fri = 6,Sat = 7};
int main()
{
    //enums = a user defined type of named 
    //interger identifer helps too make a progeam more readable.
enum Day Today = Sat;
//printf("%d", Today);//enums are not strings, but they can be treated as int.
if (Today == Sun||Today == Sat)// can also use 1 and 7 instead of Sun and Sat
{
    printf("\nYeah, Today is Holiday!");
}
else
{
    printf("\nI have word today.");
}
return 0;
}