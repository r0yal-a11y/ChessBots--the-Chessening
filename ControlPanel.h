#include "Deck.h"
#include "GamePiece.h"
#include "GameBoard.h"//
#include <SFML/Graphics.hpp>
#include <iostram>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <array>

#ifndef ControlPanel_H
#define ControlPanel_H
//control panel reads card, which corresponds to a GamePiece (
class ControlPanel {
private:
	std::vector<CardSlot> CardSlots;
	std::vector<CardSlot> HandSlots;
	int DeckCount = 0;
	std::vector<CardSlot> 

protected:
	std::vector<Card> Cardslots;
	for
public:
	void GetActiveCards(CardSlot CardSlots, string s);//execute a turn on button press
	void SetActiveCards(CardSlot CardSlots, string s, Card::getGamePiece);
	void SetDeck()

	//functions for initializing game.

};
