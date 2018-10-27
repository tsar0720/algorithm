#include "pch.h"
#include <iostream>

int Factorial(int x)
{
	if (x == 0) return 1;
	return x * Factorial(x - 1);
}

int main()
{
	int number;
	std::cout << "Enter number" << std::endl;
	std::cin >> number;
	std::cout << Factorial(number);
	return 0;
}

