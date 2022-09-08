#include<stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1;
    scanf("%d", &n);
    int a = 4;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        arr[i] = t1;
    }
    int count = 0;
    for (int k = 1; k <=n; k++)
    {
        for (int j = arr[a]+1; j < arr[a+1]; j++)
        {
            printf("%d ",j);
            count++;
            if(count==n)
                return 0;
        }
        a++;
    }
return 0;
}