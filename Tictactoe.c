// Programing A C++ Application to play tic-tac-toe 
/* A simple Tic Tac Toe game. */
#include <stdio.h>
#include <stdlib.h>

char Array[3][3];  /* the tic tac toe matrix */
//Character array 3X3
char check(void);
//void intializaiton matrix function
void Init_Matrix(void);
//void player_move
void Player_move(void);
//void initialization for computer move
void Computer_moves(void);
//matric to display
void Matrix_disp(void);
 

/* Created a structure here. The name of the structure is
 * StudData.
 */
struct StudData {
    //Student Name
    char* stud_name;
    //Class number is ITT 310
    int class_num;
    //Display your age 
    int stud_age;
};
int main(void)
{
    /* student is the variable of structure StudentData*/
    struct StudData stud;

    /*Assigning the values of each struct member here*/
    stud.stud_name = "Jackelyn Pohlman";
    stud.class_num = 310;
    stud.stud_age = 30;

    /* Displaying the values of struct members */
    printf("\nStudent Name: %s\n\n", stud.stud_name);
    printf("\nGrand Canyon Class ITT- %d\n", stud.class_num);
    printf("\nStudent Age is: %d\n", stud.stud_age);
    
    //data type designed for storage of letters
    char done;
//This portion of the code reserved for union data
    union Data {
        //float comp
        //initiate player 
        float Comp;
        int Player;
    } j;

    {
        j.Comp = 0;

        j.Player = 0;
        //Print message for Computer = 0 and Player =X
        printf("\nComputer = %d\n", j.Comp);
        printf("\nPlayer =X\n", j.Player);
    }
    //Print message "Welcome to tic tak toe"
    printf("\nWelcome to Tic Tac Toe.\n");
    //Print message"User against computer, may the best opponent win."
    printf("\nUser against computer, may the best opponent win.\n");
    //print message "To start please make your first move"
    printf("\nTo start please make your first move.\n");

    done = ' ';
// initialize matrix for tic tac toe
    Init_Matrix();
    //do function has player make first move
    do {
        Matrix_disp();
        Player_move();
    //algorithm checks to see if player has won
        done = check(); /* Have you won? */
        if (done != ' ') break; /* winner!*/
        Computer_moves();
        done = check(); /* Have you won? */
    } while (done == ' ');
    // if do function and if function has been satudfied
    //print message "Congratulations you WON"
    if (done == 'X') printf("Congratulations You WON!\n");
    //if function is not satified and computer has won, print message "I WON"
    else printf("I WON!!!!\n");
    Matrix_disp(); /* show  tic tac toe final positions */
    //Return 
    return 0;
}

/* Initialize the matrix. */
void Init_Matrix(void)
{
    //Intialize the A and B function
    int A, B;
    //A is equal to zero, is less then 3 for the array and matrix
    for (A = 0; A < 3; A++)
    // for B if equal to zero then it is also less than three
        for (B = 0; B < 3; B++) Array[A][B] = ' ';
}

/* Player's move. */
void Player_move(void)
{
    //Moves are made on an X and Y plane
    int x, y;
    //Print message to ender X, and Y coordinates to establish move
    printf("Enter X,Y coordinates for your move(X): ");
   // Enter X coordinate, then hit enter
    //Enter Y coordinate and press enter
    //X will appear in the matrix
    scanf_s("%d%*c%d", &x, &y);

    x--; y--;
    //X must be withing the Parameters of 1 and 3 for X and 1 and 3 for Y
    if (Array[x][y] != ' ') {
        //If outside the array position print message "Invalid move, Please try again"
        printf("Invalid move, Please try again.\n");
        //Player makes move
        Player_move();

    }
    else Array[x][y] = 'X';
}

/* Computer will take its turn. */
void Computer_moves(void)
{
    //Computer will make educated move between X and Y parameters for the array
    int A, B;
    //A will allow a move between 1 and 3 as will B 
    for (A = 0; A < 3; A++) {
        for (B = 0; B < 3; B++)
            if (Array[A][B] == ' ') break;
        if (Array[A][B] == ' ') break;
    }

    if (A * B == 9) {
        //If all spots on array are filled and a winner has not been establish print "It's a DRAW PARTNER"
        printf("It's a DRAW PARTNER\n");
        //Exit game
        exit(0);
    }
    else
        Array[A][B] = 'O';
}

/* Matrix will display on the screen. */
void Matrix_disp(void)
{
    int t;
    //This code prints matrix on the screen
    for (t = 0; t < 3; t++) {
        printf(" %c | %c | %c ", Array[t][0],
            Array[t][1], Array[t][2]);
        if (t != 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

/* See if there is a winner. */
char check(void)
{
    int A;
// Check row for winner to see if # consecutive X's or O's is present
    for (A = 0; A < 3; A++)  /* check rows */
        if (Array[A][0] == Array[A][1] &&
            Array[A][0] == Array[A][2]) return Array[A][0];
//Check column for winner to see if 3 consecutive X's or O's are present
    for (A = 0; A < 3; A++)  /* check columns */
        if (Array[0][A] == Array[1][A] &&
            Array[0][A] == Array[2][A]) return Array[0][A];
//Check diagonal path within array 
    /* test diagonals */
    if (Array[0][0] == Array[1][1] &&
        Array[1][1] == Array[2][2])
        return Array[0][0];
//Check horizonatal position within array
    if (Array[0][2] == Array[1][1] &&
        Array[1][1] == Array[2][0])
        return Array[0][2];
//Return results
    return ' ';
}