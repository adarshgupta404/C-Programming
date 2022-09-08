#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= n; k++)
        {
            if(i*i + j*j == k*k)
            {
                printf("P. Triplet: %d %d %d\n",i,j,k);
            }
        }
        
    }
    
}

return 0;
}