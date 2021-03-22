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
   

to give you an idea, I've provided a snipit of my overall code, to be successful 
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


