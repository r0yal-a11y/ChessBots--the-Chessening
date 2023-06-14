#include "PawnPiece.h"
//   public:
    PawnPiece::PawnPiece(char PieceColor) : GamePiece(PieceColor) {};
    PawnPiece::~PawnPiece() {};
   // private:
    virtual char PawnPiece::GetPiece() {
        return 'P';
    };
    bool PawnPiece::AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]){
                GamePiece* qpDest = GameBoard[iDestRow][iDestCol];
                if(qpDest == 0){
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

        
