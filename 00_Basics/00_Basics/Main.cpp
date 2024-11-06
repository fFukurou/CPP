
// Includes all the contents from the iostream file into our source file
// HEADER files do not get compiled, only cpp files.
#include <iostream>

//- Declaration: "Hey compiler, this exists!"
//- Definition : "Hey compiler, here is the value of this!"

void Log(const char* message);

int main()
{
	// << are overload operators, they are functions, and they are pushing "Hello World" into the 'cout'
	//std::cout << "Hello World" << std::endl;
	Log("Hello World!");
	std::cin.get();
}

