#include<stdio.h>
#include<string.h>
//struct User
//{
//    char name[25];
//    char password[12];
//    int id;
//};
//typedef char user[25];
typedef struct 
{
    char name[25];
    char password[12];
    int id;
}User;

int main()
{
// typedef = reserved keywords that gives an existing 
//datatype a "nickname".
//struct User user1 = {"Bro","password123", 1236254485};
//struct User user1 = {"Bro","password123", 1290438095};
// user user1= "Bro"; // for typedef char user[25];
User user1 = {"Bro","password123", 1236254485};
User user2 = {"Bruh","password153", 1290438095};
printf("NAME: %s\n",user1.name);
printf("PASSWORD: %s\n",user1.password);
printf("ID: %d\n\n",user1.id);
printf("NAME: %s\n",user2.name);
printf("PASSWORD: %s\n",user2.password);
printf("ID: %d\n\n",user2.id);
return 0;
}
