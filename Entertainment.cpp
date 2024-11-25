#include "Entertainment.h"
#include <string>
#include <iostream>


Entertainment::Entertainment(int price, std::string description) : Price{ price }, Description{ description } {}

int Entertainment::GetPrice() 
{
	return this->Price;
}


std::string Entertainment::GetDescription()
{ 
	return this->Description;
}

Entertainment::~Entertainment()
{
	std::cout << "Object entertainment was deleted" << "\n";
}