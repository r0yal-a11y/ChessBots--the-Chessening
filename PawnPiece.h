#ifndef PAWNPIECE_H
#define PAWNPIECE_H
#include "GamePiece.h"
class PawnPiece     : public GamePiece{
    public:
    PawnPiece(char PieceColor) : GamePiece(PieceColor) {};
    ~PawnPiece() {};
    private:
    virtual char GetPiece();
     bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8])
}