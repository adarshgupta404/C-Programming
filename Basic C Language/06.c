// Sorting an array(bubble sort)
#include <stdio.h>
void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1]) //(array[j]<array[j+1]) for decending order
            {                            // assending order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    // int array[]= {9,1,8,2,7,3,6,4,5};
    //  char array[]= {'A','C','D','B'}; //Change the data type of array
    //  to char and to take values use %c
    int n;
    printf("Enter your n: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d digit: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf(" ");
    }
    printf("\n");
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printArray(array, size);
    return 0;
}