#include "fcpp.hh"
  
int quadrat (int x) //cout zeigt mir an, wann quadriert wird
{
	x = x*x;
	std::cout << "Quadrierung. Zwischenergebnis: " << x << "\n";
	return x;
}

int gerademultsignal(int a) //Gibt mir aus, wenn exponentation(basis, exponent/2 gelesen wird
{
	std::cout << "Weitere Multiplikation, Exponent gerade.  Momentanes Ergebnis: " << a << "\n" ;
	return a;
}

int ungerademultsignal(int b) //Zur Vollständigkeit halber auch hier einfach mal cout, damit man die Anzahl an Multiplikationen auch einfach ablesen kann
{
	std::cout << "Weitere Multiplikation, Exponent ungerade. Mit Basis multipliziert. Zwischenergebnis: " << b << " \n";
	return b;
}

int exponentation(int basis, int exponent)
{
	int ergebnis;
	ergebnis = cond(exponent<=0,cond(exponent<0,0, 1),cond(exponent==1, basis, cond(exponent%2==0, quadrat(gerademultsignal(exponentation(basis, exponent/2))), ungerademultsignal(basis*exponentation(basis, exponent-1)))));
	return ergebnis;
}

int main ()
{
	int Bas;
	int Expo;
	std::cout << "Geben Sie bitte zuerst eine Basis, dann einen Exponenten an: \n";
	std::cin >> Bas;
	std::cin >> Expo;
	std::cout << "\n";
	int Ende;
	Ende = exponentation(Bas, Expo);
	std::cout << "\n" << "Das Ergebnis lautet " << Ende;	
	return 0;
}

//Jede einzelne Berechnung gibt mir eine andere Ausgabe. Anhand der Reihenfolge der Ausgaben kann einfach nachvollzogen werden,
//dass das Substitutionsmodell greift.

