#pragma once
#include <iostream>
#include <string>
#include "Entertainment.h"

class Trip : public Entertainment
{
private:
	static unsigned Count;

public:
	Trip(int price, std::string description);
	void ShowInfo() override;
	void ShowCount() override;
	~Trip();
};