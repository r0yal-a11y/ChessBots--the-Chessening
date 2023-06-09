#include "GamePiece.h"
class PawnPiece :public GamePiece
{
    public:
    PawnPiece(char PieceColor) : GamePiece(PieceColor) {}
    ~PawnPiece() {}
    private:
    virtual char GetPiece() {
        return 'P';
    }
    bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]){
                GamePiece* qpDest = GameBoard[iDestRow][iDestCol];
                if(qpDest == o){
                    //Destination square unoccupied
                    if(iSrcCol == iDestCol) {
                        if(GetColor() == 'W'){
                            if(iDestRow == iSrcRow + 1){
                                return true;
                            }
                            
                        }else {
                            if(iDestRow == iSrcRow - 1) {
                                return true;
                            }
                        }

                    }
                }else {
                    //Dest holds piece of opposite color
                    if((iSrcCol == iDestCol +1 ) || (iSrcCol == iDestCol - 1 )){
                        if(GetColor() == 'W') {
                            if(iDestRow == iSrcRow +1){
                                return true;
                            }
                        }else {
                            if(iDestRow == iSrcRow - 1){
                                return true;
                            }
                        }
                    }
                    return false;
                }
            };

        
}