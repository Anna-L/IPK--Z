#include "fcpp.hh"
  
int quadrat (int x)
{
  return x*x;
}

int exponentation(int basis, int exponent)
{
	int ergebnis;
	ergebnis = cond(exponent<=0,cond(exponent<0,0, 1),cond(exponent==1, basis, cond(exponent%2==0, quadrat(exponentation(basis,exponent/2)), basis*exponentation(basis, exponent-1))));
	return ergebnis;
}

int main ()
{
	int Bas;
	int Expo;
	std::cout << "Geben Sie bitte zuerst eine Basis, dann einen Exponenten an: \n";
	std::cin >> Bas;
	std::cin >> Expo;
	int Ende;
	Ende = exponentation(Bas, Expo);
	std::cout << "Das Ergebnis von " << Bas << " hoch " << Expo << " lautet " << Ende << "\n";	
	return 0;
}
