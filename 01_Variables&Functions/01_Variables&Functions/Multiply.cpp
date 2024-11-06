#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	unsigned int result; // -2 billion -> 2 billion
	result = Multiply(a, b);
	std::cout << result << std::endl;
}