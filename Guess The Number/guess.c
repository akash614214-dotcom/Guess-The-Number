#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>


void easy();
void medium();
void hard();
void start();

int main () {
    start();
    return 0;
}

void start () {
    int ch;
    printf("\n=========================\n");
    printf("     Guess the number     \n");
    printf("=========================\n");
    printf("     ****LAVELS****\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard \n");
    printf("4. Exit\n");
    printf("Enter Your choice :");
    scanf("%d", &ch);
    switch (ch) {
        case 1: easy();
        break;

        case 2: medium();
        break;

        case 3: hard();
        break;

        case 4: printf("====.Thanking you.====");
        exit(0);
        break;

        default: printf("Invalid Command!\n");
        start();
    }
}

void easy () {

    int num, guess, attempt;
    srand(time(NULL));
    num = rand() % 10 + 1;
    attempt = 3;
    while (attempt != 0)
    {
        printf("\nAttemps Left : %d\n", attempt );
        printf("Guess the Number(0-10): ");
        scanf("%d", &guess);
        if(num == guess)
        {
            printf("CONGRATULATIONS, You Guessed It Correct \n");
            start();
        }
        else if (num < guess)
        {
            printf("Guessed Number is Big.\n");
            attempt--;
        }
        else if (num > guess)
        {
            printf("Guessed Number is Small.\n");
            attempt--;
        }

        
    }
    printf("You Lost! Better Luck Next Time");
    printf("Number is %d", num);
    start();
}

void medium () {
    int num, guess, attempt;
    srand(time(NULL));
    num = rand() % 30 + 1;
    attempt = 5;
    while (attempt != 0)
    {
        printf("\nAttemps Left : %d\n", attempt );
        printf("Guess the Number(0-30): ");
        scanf("%d", &guess);
        if(num == guess)
        {
            printf("CONGRATULATIONS, You Guessed It Correct \n");
            start();
        }
        else if (num < guess)
        {
            printf("Guessed Number is Big.\n");
            attempt--;
        }
        else if (num > guess)
        {
            printf("Guessed Number is Small.\n");
            attempt--;
        }

        
    }
    printf("You Lost! Better Luck Next Time");
    printf("Number is %d", num);
    start();
}

void hard () {
    int num, guess, attempt;
    srand(time(NULL));
    num = rand() % 100 + 1;
    attempt = 7;
    while (attempt != 0)
    {
        printf("\nAttemps Left : %d\n", attempt );
        printf("Guess the Number(0-100): ");
        scanf("%d", &guess);
        if(num == guess)
        {
            printf("=======================\n");
            printf("   CONGRATULATIONS\n");
            printf("You Guessed It Correct \n");
            printf("=======================\n");
            getchar();
            start();
        }
        else if (num < guess)
        {
            printf("Guessed Number is Big.\n");
            attempt--;
        }
        else if (num > guess)
        {
            printf("Guessed Number is Small.\n");
            attempt--;
        }

        
    }
    printf("\nYou Lost! Better Luck Next Time\n");
    printf("Number is %d", num);
    getchar();
    start();

}

