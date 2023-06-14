#pragma once
#include <vector>
#include <deque>
#include "Card.h"
class Deck
{
public:
	Deck();//construct
	~Deck();//destruct

	void Print();
	void Shuffle();

	Card* TopCard();//look at top card.
	void PopCard();//card goes from top to bottom

private:
	std::deque<Card*> deck;//pointer gives dynamic polymorph

};