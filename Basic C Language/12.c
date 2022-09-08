// Number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses=0;
    int answer;

srand(time(0));
//uses the current time as a seed
answer = (rand()%MAX)+MIN;
do {
    printf("Enter a guess : ");
    scanf("%d", &guess);
    if (guess>answer)
    {
        printf("Too high!\n");
    }
    else if (guess<answer)
    {
        printf("Too low!\n");
    }
    else
    {
        printf("YOU WON, CORRECT GUESS!!!!\n");
    }
guesses++;  
}while(guess!=answer);

printf("***********************\n");
printf("answer: %d\n", answer);
printf("guesses: %d\n", guesses);
printf("***********************");
return 0; 
}