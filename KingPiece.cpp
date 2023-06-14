#include "GamePiece.h"

class KingPiece : public GamePiece
{
    public: KingPiece(char cColor) : GamePiece(cColor){}
    ~KingPiece() {}

    private: 
    virtual char GetPiece() {
        return 'K'; //change data type if you want to use an image or smthn.
    }

    bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]){
        int iRowDelta = iDestRow - iSrcRow;
        int iColDelta = iDestCol - iSrcCol;
        if(((iRowDelta >= -1)&&(iRowDelta <=1)) && ((iColDelta >=-1) &&(iColDelta<= 1))){
            return true;
        }
        return false;
            }
}