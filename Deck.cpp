#include "Deck.h"
#include <iostream>
Deck::Deck(int size)
	: deck()
{
	deck.reserve(size);
	//could change this to a random int, but we're just gonna put in one of everything. 
	
	for (Card::Gamepiece p = Card::KING; p <= Card::QUEEN; p = static_cast<Card::Gamepiece>(static_cast<int>(p) +1))
	{
		for (Card::Suits s = Card::HEARTS; s <= Card::SPADES; s = static_cast<Card::Suits>(static_cast<int>(s) + 1)) {
			std::cout << p << " " << s << std::endl;
		}
	}
}
Deck::~Deck()
{
	for (Card* card : Deck)
	{
		delete card;
	}
	Deck.clear();
}