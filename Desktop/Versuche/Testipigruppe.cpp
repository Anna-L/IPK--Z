#include <iostream>
#include <fcpp.hh>

int main()
{
	int age;
	std::cout << "Hallo, bitte verraten Sie mir Ihr Alter: \n";	
	std::cin >> age;
	std::cout << "Sie sind " << age << " Jahre alt. \n";
	int control;
	control = cond(age<18,0,1);
	print(control);
	return 0;
}
