#include "stdafx.h"
#include <string>
#include <iostream>
#include "Card.h"
#include <sstream>
#include <string>


using namespace card;
Card::Card()
{
}

Card::Card(CardRank rank, int value) 
	: m_rank(rank), m_value(value)
{
}

Card::Card(CardRank rank, CardSuit suit, int value)
	: m_rank(rank), m_suit(suit), m_value(value)
{
}

Card::~Card()
{
}

int Card::compareByRank(Card & card)
{
	int result = 0;
	if (getRank() == card.getRank())
		result = 0;
	else if (getRank() < card.getRank())
		result = -1;
	else
		result = 1;
	return result;
}

bool Card::compareBySuit(Card & card)
{
	bool result = true;
	if (getSuit() != card.getSuit())
		result = false;
	return result;
}

int Card::compareByValue(Card & card)
{
	int result = 0;
	if (getValue() == card.getValue())
		result = 0;
	else if (getValue() < card.getValue())
		result = -1;
	else
		result = 1;
	return result;
}

void Card::setRank(CardRank rank)
{
	m_rank = rank;
}

void Card::setSuit(CardSuit suit)
{
	m_suit = suit;
}

void Card::setValue(CardRank rank, int value, CardSuit suit)
{
	m_value = value;
}

std::string Card::getStringRank()
{
	std::string cardRank;
	switch (m_rank)
	{
	case ACE:
		cardRank = "ACE";
		break;
	case TWO:
		cardRank = "TWO";
		break;
	case THREE:
		cardRank = "THREE";
		break;
	case FOUR:
		cardRank = "FOUR";
		break;
	case FIVE:
		cardRank = "FIVE";
		break;
	case SIX:
		cardRank = "SIX";
		break;
	case SEVEN:
		cardRank = "SEVEN";
		break;
	case EIGHT:
		cardRank = "EIGHT";
		break;
	case NINE:
		cardRank = "NINE";
		break;
	case TEN:
		cardRank = "TEN";
		break;
	case JACK:
		cardRank = "JACK";
		break;
	case QUEEN:
		cardRank = "QUEEN";
		break;
	case KING:
		cardRank = "KING";
		break;
	}
	return cardRank;
}

std::string Card::getStringSuit()
{
	std::string cardSuit;
	switch (m_suit)
	{
	case HEARTS:
		cardSuit = "HEARTS";
		break;
	case SPADES:
		cardSuit = "SPADES";
		break;
	case CLUBS:
		cardSuit = "CLUBS";
		break;
	case DIAMONDS:
		cardSuit = "DIAMONDS";
		break;
	}
	
	return cardSuit;
}

CardRank Card::getRank()
{
	return m_rank;
}

CardSuit Card::getSuit()
{
	return m_suit;
}

int Card::getValue()
{
	return m_value;
}

std::string Card::toString()
{
	std::ostringstream oss;
	oss << getStringRank() << " OF " << getStringSuit() << " " << getValue(); 
	std::string out = oss.str();
	return out;
}

std::ostream& operator<<(std::ostream& os, Card& c)
{
	os << c.toString();
	return os;
}
