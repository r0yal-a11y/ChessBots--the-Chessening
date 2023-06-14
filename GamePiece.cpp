#include "GamePiece.h"
#include <stdlib.h>
#include <iostream>
public:
    GamePiece::GamePiece(char PieceColor) : mPieceColor(PieceColor) {}
    GamePiece::~GamePiece() {}
    virtual char GamePiece::GetPiece() = 0;
    char GamePiece::GetTeam() {
        return mPieceColor;
    }
    bool GamePiece::IsLegalMove(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]){//defines the piece legal moves. 
        GamePiece* qpDest = GameBoard[iDestRow][iDestCol];
        if((qpDest == 0) || (mPieceColor != qpDest->getColor())){dsadas
            return AreSquaresLegal(iSrcRow, iSrcCol, iDestCol, GameBoard);
        }
        return false;
    }


