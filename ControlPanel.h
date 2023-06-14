#include "Deck.h"
#include "GamePiece.h"
#include <iostream>
#include <vector>
#include <iomanip>
class ControlPanel
{
public:
	ControlPanel();
	~ControlPanel();

	void Start();
	//load in a deck, load in the chess board, load in player piece, load in bot pieces
	//draw starting hand.

	void Update();
	//draw 4-n cards if player hand <4. ask player which cards to put down in what position 
	/*\
	Cards In Deck: 13
	Cards In Discard: 7
	Current Turn:4
	Enemies Remaining: 2

	COMMAND  LINE
	1	2	3	4
	X	O	O	X
	P	-	-	P
	--------------
	Hand
	K	K	P	Q
	Please type the letter of the card you wish to play
	>Q
	You have selected the Queen, correct?
	>Y
	What position will you place the Queen card? X means a card is currently on it. O means the space is free.
	Placing a card on an occupied slot will replace it. 
	Cards In Deck: 13
	Cards In Discard: 7
	Current Turn:4
	Enemies Remaining: 2

	COMMAND  LINE
	1	2	3	4
	X	O	O	X
	P	-	-	P
	--------------
	Hand
	K	K	P	Q
	>3
	Cards In Deck: 13
	Cards In Discard: 7
	Current Turn:4
	Enemies Remaining: 2

	COMMAND  LINE
	1	2	3	4
	X	O	X	X
	P	-	Q	P
	--------------
	Hand
	K	K	P	Q
	Type Begin to start your turn or Edit to add another card.
	>Begin
	Slot 1
	Pawn Move Source: B4
	Destination: 
	>B6
	ILLEGAL MOVE
	Destination:
	>B5
	Move successful
	Slot 2: No Moves Executed
	Slot 3: Queen
	Source: B5
	Destination: F5
	Move Successful. 
	An enemy Bishop has been taken.
	Slot 4: Pawn
	Move Unsuccessful. Pawn Blocked.

	>



	*/
	
	void Prompt();
	//void ExecuteTurn();
	//reads the GamePiece value of the card, allows the player to move their piece as if it were that piece,
	//makes the move if legal, updates the board, then moves to the next
	//void Exit();//exits game.
private:
	//Deck* Discard;//cards that have been overwrritten will go here. once the deck has run out of cards,
	//this is shuffled back into the main deck.
	//Deck* deck;//holds all the cards.
	Deck* MyHand;
	/*enum Slots {
	 ONE = 1,
	 TWO,
	 THREE,
     FOUR,
	}*/
	//const int HandSize = 4;
	GamePiece* CardRule;//this gamepiece corresponds to the GamePiece.h class
	vector<Card> Hand;
	vector<Card> CmdLine;
	bool MaxHandSizeReached();//detects if a player has drawn over the handlimit.
	int Turn = 0;
	int CardPos;
	//Card* Slot1(), Slot2(), Slot3(), Slot4();// active slots
	//Card* Hand1(), Hand2(), Hand3(), Hand4();//hand slots, can be empty







};
