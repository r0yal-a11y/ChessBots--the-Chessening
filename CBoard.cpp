
//right now this is just a test board to put something up and represent what a level looks like
#include "GamePiece.h"
#include <stdio.h>
#include <iostream>

class CBoard//CBoard merely sets up the board, and places pieces where they need to be. the idea is to set the player piece at wherever it needs to be and simply play the game from there.
{
    public:
    CBoard() {

    //initialize
    for (int iRow = 0; iRow < 8; ++iCol){      
        for(int iCol = 0; iCol < 8; ++iCol){
            MainGameBoard[iRow][iCol] = o;
        }
    }
    /*TODO: Change layout to make it more adaptable. IE levels.*/
    //sets Robot/Puzzle Pieces. 
    for (int iCol = 0; iCol < 8; ++iCol) {
                MainGameBoard[6][iCol] = new PawnPiece('B');
            }
            MainGameBoard[7][3] = new KingPiece('B');
        /* MainGameBoard[7][0] = new RookPiece('B');
            MainGameBoard[7][1] = new KnightPiece('B');
            MainGameBoard[7][2] = new BishopPiece('B');
        
            MainGameBoard[7][4] = new QueenPiece('B');
            MainGameBoard[7][5] = new BishopPiece('B');
            MainGameBoard[7][6] = new KnightPiece('B');
            MainGameBoard[7][7] = new RookPiece('B');*/
            for(int iCol = 0; iCol <8; ++iCol){
                MainGameBoard[1][iCol] = new PawnPiece('W');
            }
            MainGameBoard[0][3] = new KingPiece('W');
        /* MainGameBoard[0][0] = new RookPiece('W');
            MainGameBoard[0][1] = new KnightPiece('W');
            MainGameBoard[0][2] = new BishopPiece('W');
        
            MainGameBoard[0][4] = new QueenPiece('W');
            MainGameBoard[0][5] = new BishopPiece('W');
            MainGameBoard[0][6] = new KnightPiece('W');
            MainGameBoard[0][7] = new RookPiece('W');*/
    }
    ;
    ~CBoard() {
        for (int iRow = 0; iRow < 8; ++iRow) {
                for (int iCol = 0; iCol < 8; ++iCol) {
                    delete MainGameBoard[iRow][iCol];
                    MainGameBoard[iRow][iCol] = 0;
            }
        }
    };
    void Print() {
        using namespace std;
        const int kiSquareWidth = 4;
        const int kiSquareHeight = 3;
        for(int iRow = 0; iRow < 8*kiSquareHeight; ++iRow){
            int iSquareRow = iRow/kiSquareHeight;
            //Print side border w/ numbering
            if(iRow%3 == 1) {
                cout << '-' <<(char)('1'+7 - iSquareRow)<< '-'; 
            }else {
                cout <<'---';
            }
        }// Print the chess board
            for (int iCol = 0; iCol < 8*kiSquareWidth; ++iCol) {
                int iSquareCol = iCol/kiSquareWidth;
                if (((iRow % 3) == 1) && ((iCol % 4) == 1 || (iCol % 4) == 2) && MainGameBoard[7-iSquareRow][iSquareCol] != 0) {
                    if ((iCol % 4) == 1) {
                        cout << MainGameBoard[7-iSquareRow][iSquareCol]->GetColor();
                    } else {
                        cout << MainGameBoard[7-iSquareRow][iSquareCol]->GetPiece();
                    }
                } else {
                    if ((iSquareRow + iSquareCol) % 2 == 1) {
                        cout << '*';
                    } else {
                        cout << ' ';
                    }
                }
            }
            cout << endl;
        

        //print bottom border w numbers
        for (int iRow = 0; iRow < kiSquareHeight; ++iRow) {
            if (iRow % 3 == 1) {
                cout << "---";
                for (int iCol = 0; iCol < 8*kiSquareWidth; ++iCol) {
                    int iSquareCol = iCol/kiSquareWidth;
                    if ((iCol % 4) == 1) {
                        cout << (iSquareCol + 1);
                    } else {
                        cout << '-';
                    }
                }
                cout << endl;
            } else {
                for (int iCol = 1; iCol < 9*kiSquareWidth; ++iCol) {
                    cout << '-';
                }
                cout << endl;
            }
        }
    
       bool CanMove(char PieceColor) {
        // Run through all pieces
        for (int iRow = 0; iRow < 8; ++iRow) {
            for (int iCol = 0; iCol < 8; ++iCol) {
                if (MainGameBoard[iRow][iCol] != 0) {
                    // If it is a piece of the current player, see if it has a legal move
                    if (MainGameBoard[iRow][iCol]->GetColor() == PieceColor) {
                        for (int iMoveRow = 0; iMoveRow < 8; ++iMoveRow) {
                            for (int iMoveCol = 0; iMoveCol < 8; ++iMoveCol) {
                                if (MainGameBoard[iRow][iCol]->IsLegalMove(iRow, iCol, iMoveRow, iMoveCol, MainGameBoard)) {
                                    // Make move and check whether king is in check
                                    GamePiece* qpTemp                   = MainGameBoard[iMoveRow][iMoveCol];
                                    MainGameBoard[iMoveRow][iMoveCol]   = MainGameBoard[iRow][iCol];
                                    MainGameBoard[iRow][iCol]           = 0;
                                    bool bCanMove = !IsInCheck(PieceColor);
                                    // Undo the move
                                    MainGameBoard[iRow][iCol]           = MainGameBoard[iMoveRow][iMoveCol];
                                    MainGameBoard[iMoveRow][iMoveCol]   = qpTemp;
                                    if (bCanMove) {
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    GamePiece* MainGameBoard[8][8];
};
}

