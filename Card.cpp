#include "Card.h"
#include <iostream>
Card::Card(Gamepieces GAMEPIECE, Suits SUIT)
	:Gamepiece(GAMEPIECE),
	Suit(SUIT)
{

}

Card::~Card()
{

}

Card::Gamepieces Card::GetGamepiece()
{
	return Gamepieces();
}

Card::Suits Card::GetSuit()
{
	return Suits();
}

/*int Card::GetValue()
{
	return 0;
}*/
void Card::Print()
{
	if (Gamepiece == QUEEN)
		std::cout << "Q";
	else if (Gamepiece == ROOK)
		std::cout << "R";
	else if (Gamepiece == KNIGHT)
		std::cout << "Kn";
	else if (Gamepiece == BISHOP)
		std::cout << "B";

	else if (Gamepiece == KING)
		std::cout << "K";

	else std::cout << "P";

	if (Suit == HEARTS)
	{
		std::cout << "H";
	}
	else if (Suit == CLUBS)
	{
		std::cout << "C";
	}
	else if (Suit == DIAMONDS)
	{
		std::cout << "D";
	}
	else if (Suit == SPADES)
	{
		std::cout << "S";
	}
	else
		std::cout << "!";

};