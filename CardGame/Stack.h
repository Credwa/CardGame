#ifndef STACK_H
#define STACK_H
#include "stdafx.h"
#include "Card.h"
class Stack
{
private:
	struct node 
	{
		node * next;
		node * prev;
		Card data;
	};
	node * current;
	node * ptr;
	node * temp;
	std::string emptyError = "Stack is empty can't peak or pop";
	
	
public:
	Stack();
	~Stack();
	int size;
	void push(Card);
	Card pop();
	Card peak();
	
	
};

#endif
