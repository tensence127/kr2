#pragma once
#include <iostream>
#include <string>
#include "Entertainment.h"

class Flight : public Entertainment
{
private:
	static unsigned Count;

public:
	Flight(int price, std::string description);
	void ShowInfo() override;
	void ShowCount() override;
	~Flight();
};