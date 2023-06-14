#include "ControlPanel.h"
#include <iostream>
#include <vector>
#include <iomanip>
ControlPanel::ControlPanel() 
{}

ControlPanel::~ControlPanel() {}


ControlPanel::Start() 
{
	std::cout << "Setting Board..."<< std::endl;
	//ChessBoard MyBoard();//chessboard class
	//BoardPiece MyPiece(5, 5);//Boardpiece class
	//ChessBoard Generation
	//PiecePlacement
	//Card Dealing
	std::cout << "creating deck"<<std::endl ;
	std::vector<Card> Hand;
	std::vector<Card> CmdLine;
	Deck MyDeck;
	//for demo purpose, player has access to all cards.
	//shuffle
	//draw 4
	MyDeck.Shuffle();

	for (int i = 0; i < 4; ++i)
	{
		
			Hand.push_back(MyDeck->TopCard());
			MyDeck.erase(deck.begin());

	}
	Controlpanel.Update();



}
void ControlPanel::Prompt()
{
	//CHESSBOARD GOES HERE
	std::cout << std::endl << "Cards In Deck:" << " Not implemented yet";
	std::cout << std::endl << "Cards In Discard:" << " Not implemented yet";
	std::cout << std::endl << "Turn Number: " << Turn;
	std::cout << std::endl << "Enemies Remaining" << ChessBoard::GetEnemyCount() << std::endl;
	std::cout << std::endl <<
		"\tCOMMAND  LINE" << std::endl <<
		">> 1  >  2  >  3  >  4" << std::endl <<
		"\t";
	/* << Slot1.Print() << "\t" << Slot2.Print() << "\t" << Slot3.Print() << "\t" << Slot4.Print() << std::endl <<//Slot1-4 Card*/
	for (int i = 0; i < CmdLine.size;i++)
	{
		CmdLine[i].Print();
	}
	"-------------------------------" << std::endl <<
		"Hand" << std::endl;
			for (int i = 0; i < MyHand.size; i++)
			{
				MyHand[i].Print();
			} // Hand1-4 Card
		


}
ControlPanel::Update()
{
	char a; char b;  int s;
	do {
		CardPos = 0;
		Controlpanel.Prompt();
		std::cout << std::endl << "Please type the number of the card you wish to play." << endl;
		std::cin >> CardPos >> endl;//int is better for clarity ( could have 2 of the same kind)
		std::cout << "You have selected the " << Card1.GetGamepiece() << " Is this correct? Y/N?"
			std::cin >> a;
		if ((a == 'N') || (a == 'n'))
		{
			Controlpanel.Update();
		}
		else
			Controlpanel.Prompt();
		cout << endl << "Select a slot" << endl;
		cin << int s;
		if ((s > 4) || (s <= 0))
		{
			cout << "false input. ";
			Controlpanel.Update();
		}
		else
		{
			swap(CmdLine[s], MyHand[CardPos]);
			MyHand.erase(CardPos);
		}
		std::cout << "Are you ready to execute your Commands? Press R to proceed or anything else to continue editing your commandline." << endl;
		std::cin >> b;
	} while (b != 'R');
	std::cout << "GAME HAPPENS HERE" << std::endl;
	return 0;
}