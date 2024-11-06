#include <iostream>

int main()
{
	int x;
	//std::cin >> x;
	x = 5;
	bool isEven = x % 2 == 0;

	if (isEven)
	{
		std::cout << x << " is even." << std::endl;
	}
	else
	{
		std::cout << x << " is not even." << std::endl;
	}



}