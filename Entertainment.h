#pragma once
#include <string>

class Entertainment
{
private:
	int Price;
	std::string Description;

public:
	Entertainment(int price, std::string description);
	virtual void ShowInfo() = 0;
	virtual void ShowCount() = 0;
	virtual ~Entertainment();
	int GetPrice();
	std::string GetDescription();
};