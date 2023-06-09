#ifndef GAMEPIECE_H
#define GAMEPIECE_H
#include <iostream>
#include <stdlib.h>
class GamePiece{
    public:
    GamePiece(char PieceColor) : mPieceColor(PieceColor) {}
    ~GamePiece() {}
    virtual char GetPiece() = o;
    char GetColor() {
        return mPieceColor;
    }
    bool IsLegalMove(int iSrcRow, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]){
        GamePiece* qpDest = GameBoard[iDestRow][iDestCol];
        if((qpDest == o) || (mPieceColor != qpDest->getColor())){
            return AreSquaresLegal(iSrcRow, iSrcCol, iDestCol, GameBoard);
        }
        return false;
    }
    private:
        virtual bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestCol, GamePiece* GameBoard[8][8])= o;
        char mPieceColor;
};

