// Take user input of the desired array and print it.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your n: ");
    scanf("%d",&n);
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d digit: ", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    return 0;
}