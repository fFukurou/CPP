#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
	value++;
}


int main()
{
	std::cout << "============= POINTERS ===========" << std::endl;
	int var = 8;
	//void* ptr = nullptr;
	int* ptr = &var;
	*ptr = 10;

	LOG(var);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr2 = &buffer;

	LOG(ptr2);

	delete[] buffer;

	std::cout << "=============== REFRENCES =================" << std::endl;
	int numbah = 2;
	std::cout << numbah << std::endl;
	Increment(numbah);
	std::cout << numbah << std::endl;

	std::cout << "=============== REFRENCES + POINTERS =================" << std::endl;

	int a = 35;
	int b = 92;

	int* ref = &a;
	*ref = *ref + 5;
	ref = &b;
	*ref = *ref + 8;

	LOG(a);
	LOG(b);

}