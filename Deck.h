#pragma once
#include <vector>
#include <deque>
#include "Card.h"
class Deck
{
public:
	Deck();//construct
	~Deck();//destruct
	Deck(int i);

	void Print();
	void Shuffle();

	Card* TopCard();//look at top card.
	void PopCard();//card goes from top to bottom
	//Card* DrawOne(int, Deck);
	//Card* Discard(int, Deck, Deck)
private:
	std::deque<Card*> deck;//pointer gives dynamic polymorph

};