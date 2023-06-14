#include "Deck.h"
#include "ControlPanel.h"
#include <iostream>
#include <stdio.h>
/*int main()
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
}*/

int main()
{
	cout << " Welcome to Demo v0.2 of Chessbots (NAME TBD)";
	cout << endl << endl << "Press 0 to start. Press 1 to exit.";
	cin >> int i;
	if (i = 0)
	{
		ControlPanel gamecontrol;
		gamecontrol.Prompt();
		gamecontrol.Update();
	}
	
}