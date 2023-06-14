#include "Deck.h"
#include <iostream>
#include <stdio.h>
int main()
{
	Deck deck;
	deck.Print();
	deck.Shuffle();
	deck.Print();
	Card* card = deck.TopCard();
	card->Print();
	std::cout << std::endl;
	deck.PopCard();
	deck.Print();
	std::cout << std::endl;
	//	system("pause");
	return 0;
}