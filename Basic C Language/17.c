// Writing a file
#include<stdio.h>

int main()
{
    FILE *pF = fopen("D:\\Programming\\C\\write read\\test.txt","w");
    fprintf(pF, "Spongebob Squarepants");
    fclose(pF);
/*
    if(remove("D:\\Programming\\C\\write read\\test.txt")==0) // To delete the file (by remove() function)
    {
        printf("That file was deleted successfully");
    }
    else
    {
        printf("That file was not deleted!");
    }
*/
return 0;
}