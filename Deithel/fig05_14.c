// Fig. 5.14: fig05_14.c
// Simulating the game of craps.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };

int rollDice(void);

int main(void)
{
    int sum;
    int myPoint;

    enum Status gameStatus;
    srand(time(NULL));
    
    sum = rollDice();

    switch ( sum ) {
	
	case 7:
	case 11:
	    gameStatus = WON;
	    break;

	case 2:
	case 3:
	case 12:
	    gameStatus = LOST;
	    break;

	default:
	    gameStatus = CONTINUE;
	    myPoint = sum;
	    printf("Point is %d\n", myPoint);
	    break;
    }

    while (CONTINUE == gameStatus) {
	if (sum == myPoint) gameStatus = WON;
	else
	    if (7 == sum) gameStatus = LOST;
    }

    if (WON == gameStatus ) puts("Player wins");
    else puts("Player loses");

    return 0;
}

int rollDice()
{
    int die1;
    int die2;
    int workSum;

    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    workSum = die1 + die2;

    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);

    return workSum;
}
