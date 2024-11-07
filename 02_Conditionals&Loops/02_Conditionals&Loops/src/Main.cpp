#include <iostream>
#include "Functions.h"




int main()
{
	for (int i = 0; i <= 30; i += 3)
	{
		IsEven(i);
	}

	std::cout << "===================" << std::endl;

	int i = 0;
	while (i < 33)
	{
		if (i == 24)
		{
			break;
		}
		IsEven(i);
		i += 3;
	}

	std::cout << "===================" << std::endl;

	i -= 3;

	do
	{
		
		i += 3;
		if (i == 57)
		{
			continue;
		}
		IsEven(i);
		
		
	} while (i < 60);

	
}