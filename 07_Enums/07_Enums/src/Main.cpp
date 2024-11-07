#include <iostream>

enum Example//: unsigned char
{
	A = 0, B = 1, C = 2
};

//int a = 0;
//int b = 1;
//int c = 2;
	

int main()
{
	Example value = B;

	if (value == 1)
	{
		std::cout << value << std::endl;
	}


}