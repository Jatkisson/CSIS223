#pragma once
class dispenserType
{
public:
	int getNoOfItems() const;
	int getCost() const;
	void makeSale();
	dispenserType(int setNoOfItems = 50, int setCosts = 50);
private:
	int numberOfItems;
	int cost;
};

