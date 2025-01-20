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

//---------------------------------------------
/*begin main*/
//---------------------------------------------

int main()
{

    // loop variables
    int i,m = 0;
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
    /*begin task 1 loops*/
    //---------------------------------------------
    // create the random number array and loop through it
    while (i < 5)
    {
        randArray[i] = rand() % ((50 - 1 + 1) + 1);
        i += 1;
    }


    //print out the random array
    //printf("\n--------------------------\n");
    printf("Random Number Array: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%s%d", (j > 0 ? ", " : ""), randArray[j]);
    }
    printf("\n");
while (m < 6)
{
    printf("yes\n");
    m += 1;
}

    
    
    
    
    
    // find the largest number in the array
    //printf("\n--------------------------\n");
    for (int k = 1; k < 5; k++)
    {
        if (randArray[k] > largest)
        {
            largest = randArray[k];
        }
    }
    printf("The largest value is: %d", largest);
    printf("\n\n--------------------------\n");
    printf("         The end! \n");
    printf("--------------------------\n");

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
