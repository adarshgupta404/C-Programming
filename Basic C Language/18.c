// Reading a file
#include<stdio.h>

int main()
{
    FILE *pF = fopen("D:\\Programming\\C\\write read\\poem.txt","r");
    char buffer[255];
    if(pF==NULL)
    {
        printf("Unable to open the file");
    }
    else
    {
    while(fgets(buffer, 255, pF)!=NULL)
    {
        printf("%s", buffer);
    }
    }
    fclose(pF);
    return 0;
}