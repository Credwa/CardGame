#ifndef CARD_H
#define CARD_H
//defines a single card
//is used by deck class
//card value depends on game

//TODO make rank and value into STL pair?

enum CardRank
{
    ACE, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

enum CardSuit
{
    HEARTS, SPADES, CLUBS, DIAMONDS, ALL
};

class Card
{
    private: 
        CardRank m_rank;
        CardSuit m_suit;
        int m_value;

    public: 
        Card(CardRank rank, int value); //sets rank and value equal across all suits
        Card(CardRank rank, CardSuit suit, int value);
        ~Card();

        //compare classes returns 0 if they are equal
        //returns 1 if THIS pointer more than argument
        //returns 2 if THIS points less than argument
        int compareByRank(const Card &card);
        int compareBySuit(const Card &card);
        int compareByValue(const Card &card);

        //setters
        void setRank(CardRank rank);
        void setSuit(CardSuit suit);
        void setValue(CardRank rank, int value, CardSuit suit=ALL); //sets value of rank **suit is optional parameter

        //getters
        CardRank getRank();
        CardSuit getSuit();
        int getValue();
};

#endif