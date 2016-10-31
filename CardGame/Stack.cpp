#include "stdafx.h"
#include "Stack.h"

Stack::Stack()
{
	current= nullptr;
	ptr = nullptr;
	temp = nullptr;
	size = -1;
}

Stack::~Stack()
{
	while (size != -1)
	{
		node*tempdel = current->prev;
		delete current;
		current = tempdel;
		size--;
	}
}

void Stack::push(Card card)
{

	if (current == nullptr) 
	{
		current = new node;		
		current->data = card;	
		current->next = nullptr;	//make current location know the next location
		current->prev = nullptr;
	}
	else
	{
		ptr = new node;			//next location
		current->next = ptr;	//make current location know the next location
		ptr->prev = current;	//make current location know the previous location
		current=ptr;			//switch node
		current->data = card;
	}
	size++;
}

Card Stack::pop()
{
	if (size == -1)
		throw emptyError;
	else if (!(size < 0))
	{
		temp = current;
		current = current->prev;	
	}
	size--;
	return temp->data;
	delete temp;
}

Card Stack::peak()
{
	if (size == -1)
	{
		throw emptyError;
	}
	return current->data;
}
