#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter fahrenheit: ");
    scanf("%f", &F);
    printf("\n");
    C = (F - 32) * 5 / 9;
    printf("%f F = %f C", F, C);
    printf("\n");
}