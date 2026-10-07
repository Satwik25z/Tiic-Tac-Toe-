#include<iostream>
#include "raylib.h"
using namespace std;

int checkWinner(int board[3][3]){
    // check rows and columns
    for(int i = 0 ; i < 3 ; i++){
        if(board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return board[i][0];
        }

        if(board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return board[0][i];
        }
    }

    // check diagonals
    if(board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return board[0][0];
    }

    if(board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return board[0][2];
    }

    return 0; // no winner yet
    
}

int main(){
    InitWindow(600 , 600 , "Tic Tac Toe");
    SetTargetFPS(60);
    
    int board[3][3] = {0};

    int currentPlayer = 1; // 1-> X , 2->O
    int winner = 0;

    while(!WindowShouldClose()){
        if(winner == 0 && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            int row = GetMouseX();
            int col = GetMouseY();

            if(row % 200 != 0 && col % 200 != 0){
                row /= 200;
                col /= 200;

                if(row < 3 && col < 3){
                    board[row][col] = currentPlayer;
                    winner = checkWinner(board);            //check winner
                    currentPlayer = (currentPlayer == 1) ? 2 : 1;
                }
            }
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(200, 0, 200, 600, BLACK);
        DrawLine(400, 0, 400, 600, BLACK);
        DrawLine(0, 200, 600, 200, BLACK);
        DrawLine(0, 400, 600, 200, BLACK);

        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){

                int row = i * 200;
                int col = j * 200;

                if(board[i][j] == 1){
                    DrawLine(row + 50 , col + 150 , row + 150, col + 50 , RED);
                    DrawLine(row + 50 , col + 50 , row + 150 , col + 150 , RED);
                }
                else if(board[i][j] == 2){
                    DrawCircleLines(row + 100 , col + 100 , 75 , BLUE);
                }
            }
        }

        if(winner != 0){
            DrawText(TextFormat("Player %d wins", winner), 100, 280, 30, GREEN);
        }

        EndDrawing();

    }

    CloseWindow();
    return 0;
}