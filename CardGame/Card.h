#ifndef CARD_H
#define CARD_H
//defines a single card
//is used by deck class
//card value depends on game
#include <string>
namespace card
{
	enum CardRank
	{
		ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
	};

	enum CardSuit
	{
		HEARTS, SPADES, CLUBS, DIAMONDS, ALL
	};
	
}


class Card
{

private:
	card::CardRank m_rank;
	card::CardSuit m_suit;
	int m_value;

public:
	//CardRank CardSuit int
	Card();
	Card(card::CardRank rank, int value); //sets rank and value equal across all suits
	Card(card::CardRank rank, card::CardSuit suit, int value);
	~Card();

	//compare classes returns 0 if they are equal
	//returns 1 if THIS pointer more than argument
	//returns 2 if THIS points less than argument
	int compareByRank(Card &card); 
	bool compareBySuit(Card &card);
	int compareByValue(Card &card);

	//setters
	void setRank(card::CardRank rank);
	void setSuit(card::CardSuit suit);
	void setValue(card::CardRank rank, int value, card::CardSuit suit = card::CardSuit::ALL); //sets value of rank **suit is optional parameter

	//getters
	std::string getStringRank();
	std::string getStringSuit();
	
	card::CardRank getRank();
	card::CardSuit getSuit();
	int getValue();
	std::string toString();
	//overload <<
	friend std::ostream& operator<< (std::ostream &out, Card &card);
};



#endif