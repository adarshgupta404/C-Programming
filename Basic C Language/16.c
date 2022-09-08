#include<stdio.h>
//pointers
void printAge(int *pA)
    {
        printf("You are %d years old", *pA);
    }

int main()
{
int age =21;
int *pAge = NULL; // good practice to assign NULL if declaring a pointer
pAge = &age;

printf("address of age: %p\n", &age);
printf("value of pAge: %p\n", pAge);
printf("size of age: %d bytes\n", sizeof(age));
printf("size of pAge: %d bytes\n", sizeof(pAge));
printf("value of age: %d\n", age);
printf("value at stored address: %d\n", *pAge);
printAge(pAge);
return 0;
}