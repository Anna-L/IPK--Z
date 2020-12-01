#include "fcpp.hh"

bool ungerade(int zahl) //Rückgabe Angabe, ob Zahl gerade
{
	return cond(zahl%2==0, false, true);
}

int main()
{
	int test;
	std::cout << "Welche Zahl wollen Sie testen? \n";
	std::cin >> test;
	if(ungerade(test) == 1)
	{
		std::cout << "Die Zahl ist ungerade. \n";
	}
	else
	{
		std::cout << "Die Zahl ist gerade. \n";
	}
	return 0;
}
