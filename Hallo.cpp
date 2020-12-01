#include "fcpp.hh"
/* . Schreiben Sie eine Funktion int potenz(int x, int exp), die auf diese Weise schnell
Potenzen mit exp = 1 berechnet. */
int quadrat(int a)
{
	return (a*a);
}

int potenz(int x, int exp)
{
	int zwischenzahl;
	zwischenzahl = cond(exp % 2 == 0, potenz(quadrat(x), exp-2),  42);
	return zwischenzahl;
}
int main()
{
	int Basis;
	int Expo;
	std::cout << "Geben Sie bitte die Basis ein:\n";
	std::cin >> Basis;
	std::cout << "Jetzt bitte die Exponenz:\n";
	std::cin >> Expo;
	std::cout << "Das Ergebnis lautet:\n" ;
	std::cout << potenz(Basis, Expo);
	return 0;
}
