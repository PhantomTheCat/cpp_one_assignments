#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) 
{
    //Getting tracking variables
    size_t columns = board.getX();
    size_t rows = board.getY();

    //Iterating through loop going down the columns
    for (int i = 0; i < columns; i++) 
    {
        for (int j = 0; j < rows; j = j + 2) 
        {
            ReturnType guessedSpace = guess(i, j, board);

            if (guessedSpace == ReturnType::near_miss || guessedSpace == ReturnType::hit) 
            {
                //Checking adjacent squares that are right and down as
                //we already checked the above and left spaces
                if (i < columns - 1) 
                {
                    guess(i + 1, j, board);
                }
                if (j < rows - 1) 
                {
                    guess(i, j + 1, board);   
                }
            }
        }
    }
}
