#include <iostream>
#include <string>
#include "Entertainment.h"
#include "Trip.h"
#include "Flight.h"

int main()
{
	/*Entertainment* obj{};

	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		obj = new Trip(10, "Trip1");
		std::cout << obj->GetDescription();
		break;
	case 2:
		obj = new Flight(10000, "Flight1");
		std::cout << obj->GetDescription() << "\n";
		break;
	default:
		std::cout << "wrong option";
	}

	std::cout << obj->GetCount();*/

	Entertainment* obj1{};
	Entertainment* obj2{};
	obj1 = new Trip(10, "Trip1");
	obj2 = new Flight(10, "Flight1");
	obj2->ShowCount();
	delete obj1;
	delete obj2;
}