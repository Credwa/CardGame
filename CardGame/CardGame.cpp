// CardGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Card.h"
#include "Stack.h"
#include <iostream>

int main()
{
	Card Ace(card::ACE, card::HEARTS, 1);
	Card Jack(card::JACK, card::DIAMONDS, 11);
	Card King(card::KING, card::SPADES, 13);
	Card Queen(card::QUEEN, card::CLUBS, 12);
	//std::cout << Ace.toString();
	std::cout << std::endl;
	//std::cout << Ace;
	Stack myStack;
	myStack.push(Ace);
	myStack.push(Jack);
	myStack.push(King);
	myStack.push(Queen);
	
	try 
	{
		std::cout << myStack.pop() << std::endl;
		std::cout << myStack.pop() << std::endl;
		std::cout << myStack.pop() << std::endl;
		//std::cout << myStack.pop() << std::endl;
		std::cout << myStack.peak() << std::endl;
	}
	catch (std::string strException)
	{
		std::cerr << "Error: " << strException << std::endl;
	}
	std::cout << myStack.size << std::endl;
    return 0;
}

