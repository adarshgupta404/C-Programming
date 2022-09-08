//Creating files contain even and odd number
//with my name in those files.
//Ternary operator
#include<stdio.h>
int main()
{
    FILE *even, *odd;
    int n = 10;
    int k=0;

    even = fopen("even.txt","w");
    odd = fopen("odd.txt","w");
    for(k =1; k<=n;k++)
    {
        k%2==0?fprintf(even,"\t%5d\n",k):fprintf(odd,"\t%5d\n",k);
    }
    fprintf(even,"\tAdarsh Gupta!");
    fprintf(odd,"\tAdarsh Gupta!");
    fclose(even);
    fclose(odd);
return 0;
}