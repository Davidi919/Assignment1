/*boilerplate includes*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
#include <math.h>

//---------------------------------------------
/*Tasks*/
//---------------------------------------------

/*
Write a program that does the following each time it loops:
1. Generates 5 random numbers from 1 to 50
2. Keep track of the largest number and print it out at the end of the loop
3. Stores those 5 random numbers in an array
4. Print the array
5. Create a loop that prints the word “Yes” 5 times
6. Create a loop that stops after it has run 10 times
7. Use print statement(s) to show how many times the loop ran
8. Ask the user if they want to run again
9. Keep track of how many times the program loops and print it out at the end
*/

//---------------------------------------------
/*global variable creation*/
//---------------------------------------------

//---------------------------------------------
/*Functions*/
//---------------------------------------------
void loopTasks()
{
    // loop variables
    int i = 0; 
    int m = 0;
    int n = 1;
    int randArray[4];
    int largest = randArray[0];

    // setting random seed for rand
    srand(time(NULL));

    //---------------------------------------------
    /*testing*/
    //---------------------------------------------
    // printf("printing\n");
    // printf("numbers from rand: %d\n", rand()%(50 - 1 + 1) + 1);

    //---------------------------------------------
    /*begin task loops*/
    //---------------------------------------------
    // create the random number array and loop through it
    while (i < 5)
    {
        randArray[i] = rand() % ((50 - 1 + 1) + 1);
        i += 1;
    }

    // print out the random array
    // printf("\n--------------------------\n");
    printf("Random Number Array: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%s%d", (j > 0 ? ", " : ""), randArray[j]);
    }
    printf("\n");
    while (m < 6)
    {
        printf("Yes\n");
        m += 1;
    }

    // print out 1 - 10
    while (n < 11)
    {
        printf("Loop number: %d\n", n);
        n += 1;
    }

    // find the largest number in the array
    // printf("\n--------------------------\n");
    for (int k = 1; k < 5; k++)
    {
        if (randArray[k] > largest)
        {
            largest = randArray[k];
        }
    }
    printf("\nThe largest value in the array is: %d\n", largest);
    
}
//---------------------------------------------
/*begin main*/
//---------------------------------------------

int main()
{
    int loopRuns = 0;
    char userAnswer = '\0';
    srand(time(NULL));
    loopTasks();

    while (userAnswer == '\0')
    {
        printf("\nWould you like to run the loops again? (Y/N): ");
        scanf(" %c", &userAnswer);
        if (userAnswer == 'y' || userAnswer == 'Y')
        {
            loopRuns += 1;
            
            loopTasks();
            printf("You looped %d times.\n", loopRuns);
            userAnswer = '\0';
        }
            
    }
    printf("\n--------------------------\n");
    printf("         The end! \n");
    printf("--------------------------\n");

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
