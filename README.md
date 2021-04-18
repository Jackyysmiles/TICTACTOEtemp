# TICTACTOEtemp
Hi All, this application is just a standard run of the mill edition of Tic Tac Toe with a modern automation twist. 
It is designed to test a users ability to navigate a gaming matrix. 
It is fun, a little initricate, based off of a 3X3 array or matrix, however you want to call it. 
// Programing A C++ Application to play tic-tac-toe 
/* A simple Tic Tac Toe game. */
#include <stdio.h>
#include <stdlib.h>

char Array[3][3];  /* the tic tac toe matrix */

char check(void);
void Init_Matrix(void);
void Player_move(void);
void Computer_moves(void);
void Matrix_disp(void);

int main(void)
{
    char done;

    printf("Welcome to Tic Tac Toe.\n");
    printf("User will be playing against the computer.\n");

    done = ' ';
    Init_Matrix();
   

to give you an idea, I've provided a small portion of my overall code, to be successful 
you will spend anywhere from 24-72 hours developing the code and fixing syntax errors. 
Don't be discouraged if at first you don't succeed, every error I've encourtered has brought me closer
to knowing how important knowing different tricks in coding can be. They are not errors, they are learning opportunities.
A little more about this code, Installation is pretty simple. Use your favorite app developer
For this project beqcause it is an Educational Environment, I used Microsoft Visual Studio.
It is a top notch integrated development environment.
First you include your header, and where you pull from your libraries
#include <stdio.h>
#include <stdlib.h>

then you will define your variables. 
user will rotate taking turns
until the game is over
If Player wins
Message will appear saying "Congratulation YOU WON"
end

if the game was won
  the algorithm will congratulate winner
else if the game was a draw
  tell the players it has been a draw
end
If computer has won
the a message will appear 
stating "I WON"
end

Tic tac toe with modular programming allows two opponents 
(X and O)
to Play tic tac toe the game will take a classic zlooking approach
using a two dimentional array the state of the game board will be stored and the algorithm will 
have programmer defined class types
traditionally the moves are categorized by rows and columns
to develop an array that works for the computer to move against the opponent try 
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
this is more or less showing that the computer and opponent can tie, you will have to create aan array that works
for you or does what you're looking for.
Since I am committed to keeping up with different portions of this class, we have updated 
The user profile of this tic tac toe applications to include structs and unions
C – Structures are arrays to define different types of variables that hold different sections of data at the same time.
C allows structures to represent records because they use struct statements to define new data.
C – Unions are similar to structures on how they define data types
they provide a proficient way to efficiently use memory location 
the way it is implemented into this application is a simple addition to the code
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
  

    /* Displaying the values of struct members */
    printf("\nStudent Name: %s\n\n", stud.stud_name);
    printf("\Grand Canyon Class ITT- %d\n", stud.class_num);
   
    
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
        printf("\nPlayer = X%d\n", j.Player);
    }
This displays both the requested information for the union and structs within the code. 
Union was a bit trickier and could use more work. 
But overall it was a functional code with little patching needed. 
Over the last couple of weeks we have implemented basic skills
showing users how to make a functional Tic Tac Toe Code using C
This code has input and output validation 
secure programing features
it included structs and unions 
and BUFFER OVERFLOW protection by programming like this:

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
        //If outside the array position print message "Invalid move, please try again"
        printf("Invalid move, Please try again.\n");
        //Player makes move
        Player_move();

    }
    else Array[x][y] = 'X';
}
to ensure users arent overwriting other squares that are currently occupied within the array
or choosing numbers outside of the paramaters for it. 
Thank you for you time and I hope you have enjoyed the program. 
