#pragma once
#include <vector>
#include "Card.h"
class Deck
{
public:
	Deck(int size);//construct
	~Deck();//destruct

private:
	std::vector<Card*> deck;//pointer gives dynamic polymorph
};