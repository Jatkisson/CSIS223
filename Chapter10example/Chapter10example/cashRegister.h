#pragma once
class cashRegister
{
public:
	int getCurrentBalance() const;
	void acceptAmount(int amountIn);
	cashRegister(int cashIn = 500);
private:
	int cashOnHand;
};

