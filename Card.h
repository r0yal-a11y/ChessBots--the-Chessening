
//#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <array>
#pragma once;

// make the card have an integer, 
//board reads the integer, and a switch case handles the piece movements. 
//

class Card
{
public:
	enum Gamepieces {
		KING=2,
		PAWN,
		BISHOP,
		KNIGHT,
		ROOK,
		QUEEN,
	} ;
	enum Suits {
		HEARTS = 3,
		DIAMONDS,
		CLUBS,
		SPADES
	} ;
	Card(Gamepieces GamePiece, Suits SUIT );
	virtual ~Card();

	virtual Gamepieces GetGamepiece();
	virtual Suits GetSuit();
	void Print();

protected:
	Gamepieces Gamepiece;
	Suits Suit;
};
//#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <array>
#pragma once;

// make the card have an integer, 
//board reads the integer, and a switch case handles the piece movements. 
//

class Card
{
public:
	enum Gamepieces {
		KING = 2,
		PAWN,
		BISHOP,
		KNIGHT,
		ROOK,
		QUEEN,
	};
	enum Suits {
		HEARTS = 3,
		DIAMONDS,
		CLUBS,
		SPADES
	};
	Card(Gamepieces GamePiece, Suits SUIT);
	virtual ~Card();

	virtual Gamepieces GetGamepiece();
	virtual Suits GetSuit();
	void Print();

protected:
	Gamepieces Gamepiece;
	Suits Suit;
};