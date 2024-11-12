#include <iostream>
#include <array>




int main()
{
	int example[5];
	example[0] = 2;
	example[4] = 4;


	std::cout << "SETTING AND PRINTING EACH ELEMENT OF THE ARRAY" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		example[i] = i + 1;
		std::cout << example[i] << std::endl;
	}

	example[2] = 20;
	// SAME AS
	int* ptr = example;
	// Adding 2 is equals to adding 8 bytes, since we're dealing with ints, that are worth 4 bytes each
	*(ptr + 2) = 40;
	ptr[3] = 55;

	std::cout << std::endl << "PRINTING ELEMENTS OF THE ARRAY CHANGED BY UTIZLING POINTERS" << std::endl;
	std::cout << example[2] << std::endl;
	std::cout << example[3] << std::endl;

	// Dealing with bytes individually
	int* ptr2 = example;
	 //*(ptr + 4) = 8;

	std::cout << std::endl << "CHANGING ONE OF THE ELEMENTS BY USING *(int*)((char*)ptr + 8) = 8;      \n WTF" << std::endl;
	*(int*)((char*)ptr + 8) = 8;
	std::cout << example[2] << std::endl;
	int count = sizeof(example) / sizeof(int); // 5
	std::cout << std::endl << "THE SIZE OF THIS ARRAY IS " << count << std::endl;

	std::cout << example << std::endl;

	// HEAP
	std::cout << "MESSING WITH THE HEAP :X" << std::endl;
	// int example[5];
	static const int exampleSize = 5;
	int* another = new int[exampleSize];

	delete[] another;

	// C++ 11
	std::cout << "PRINTING SIZE OF THE ARRAY BY USING std::array<int, 5> anotherArray; \n std::cout << anotherArray.size();" << std::endl;
	std::array<int, 5> anotherArray;
	std::cout << anotherArray.size() << std::endl;
	 



}