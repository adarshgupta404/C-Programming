// Memory Address
# include<stdio.h>

int main()
{
// memory = an array of bytes withn RAM (street)
// memory block = a single unit (byte) within memory, used to hold some value (person)
// memory address = the address of where a memory block is located (house address)

//char a = 'X';
//short a = 'X';
int a[3];
//double a = 'X';
//char b = 'Y';
//short b = 'Y';
int b[3];
//double b = 'Y';
//char c = 'Z';
//short c = 'Z';
int c[3];
//double c = 'Z';
printf("%d bytes\n", sizeof(a));
printf("%d bytes\n", sizeof(b));
printf("%d bytes\n", sizeof(c));

printf("%p\n",&a);
printf("%p\n",&b);
printf("%p\n",&c);

return 0;
}