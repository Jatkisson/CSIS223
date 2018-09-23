class romanType
{
private:
	const int M = 1000;
	const int D = 500;
	const int C = 100;
	const int L = 50;
	const int X = 10;
	const int V = 5;
	const int I = 1;
	int rValue;
public:
	romanType(); //Constructor
	string getRomanNumeral(string userRoman);
	int conversionRtoI(string romanNumeral, int& rValue);
	void printR(string romanNumeral, int rValue);
	void printI(string romanNumeral, int rValue);
};