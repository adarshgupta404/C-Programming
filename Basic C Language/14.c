#include<stdio.h>

int main()
{
    //BITWISE operator = special operators used in bit level programming 
    //(knowing binary is important for this topic)
// & = AND
// | = OR 
// ^ = XOR
// << = left shift
// >> = right shift

int x = 6; //6  = 00000110
int y =12; //12 = 00001100
int z =0;  //0  = 00000000
z = x&y;
printf("AND = %d\n",z); // z = 00000100 (4)

z = x|y;
printf("OR = %d\n",z);  // z = 00001110 (14)

z = x^y;
printf("XOR = %d\n",z); // z = 00001010 (10)

z = x << 1;
printf("Left = %d\n",z);// z = 00011000 (12)

z = x >> 1;
printf("Right = %d\n",z);// z = 00000110 (13)

}