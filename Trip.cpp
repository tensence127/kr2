#include "Entertainment.h"
#include "Trip.h"
#include <iostream>
#include <string>

unsigned Trip::Count = 0;

Trip::Trip(int price, std::string description) : Entertainment{price, description} 
{
	this->Count++;
}

void Trip::ShowInfo()
{
	std::cout << "Price of trip: " << this->GetPrice() << "\n" << "Description of trip: " << this->GetDescription() << "\n";
}

void Trip::ShowCount()
{
	std::cout << "Count of trips: " << this->Count << "\n";
}

Trip::~Trip()
{
	std::cout << "Object Trip was deleted" << "\n";
	this->Count--;
}