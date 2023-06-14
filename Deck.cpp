#include "Deck.h"
#include <iostream>
#include <algorithm>
Deck::Deck()
	: deck()
{
	//deck.reserve(23);
	//could change this to a random int, but we're just gonna put in one of everything. 

	for (Card::Gamepieces p = Card::KING; p <= Card::QUEEN; p = static_cast<Card::Gamepieces>(static_cast<int>(p) + 1))
	{
		for (Card::Suits s = Card::HEARTS; s <= Card::SPADES; s = static_cast<Card::Suits>(static_cast<int>(s) + 1)) {
			deck.push_back(new Card(p, s));
		}

	}


}
Deck::~Deck()
{
	for (Card* card : deck)
	{
		delete card;
	}
	deck.clear();
}
void Deck::Print()
{
	std::cout << "Deck Print" << std::endl;
	for (Card* card : deck)
	{
		card->Print();
		std::cout << " ";
	}
}
void Deck::Shuffle()
{
	std::cout << "Shuffling" << std::endl << std::endl;
	std::random_shuffle(deck.begin(), deck.end());
}


Card* Deck::TopCard()//look at top card.
{
	return deck.front();
}
void Deck::PopCard()
{//card goes from top to bottom
	deck.push_back(deck.front());//copy on top
	deck.erase(deck.begin());//delete copy
}