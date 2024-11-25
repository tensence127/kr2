#include "Entertainment.h"
#include "Flight.h"
#include <iostream>
#include <string>

unsigned Flight::Count = 0;

Flight::Flight(int price, std::string description) : Entertainment{ price, description }
{
	this->Count++;
}

void Flight::ShowInfo()
{
	std::cout << "Price of flight: " << this->GetPrice() << "\n" << "Description of flight: " << this->GetDescription() << "\n";
}

void Flight::ShowCount()
{
	std::cout << "Count of flights: " << this->Count << "\n";
}

Flight::~Flight()
{
	std::cout << "Object flight was deleted" << "\n";
	this->Count--;
}