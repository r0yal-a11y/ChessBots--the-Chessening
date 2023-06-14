#ifndef CARD_H
#define CARD_H
#include <SFML/Graphics.hpp>
#include <iostram>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <array>
#pragma once

// make the card have an integer, 
//board reads the integer, and a switch case handles the piece movements. 
//

class Card
{
public:
	enum Gamepiece {
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
	Card(Gamepiece PieceVal, Suits SUIT );
	virtual ~Card();

	virtual Gamepiece GetGamepiece();
	virtual Suits GetSUIT();

private:
	int Rank, Suit;
};