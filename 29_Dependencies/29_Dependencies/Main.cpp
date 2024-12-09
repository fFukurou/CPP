// Dynamic Linking happens at runtime
// Stataic Linking happens at compile time



#include <iostream>
// Header file stays the same for both (usually)
#include <GLFW/glfw3.h>
// extern "C" int glfwInit();

// ----------------------- LINKING ----------------------- 

// Include the file by going to project propertier, C++, general, Additional Include Arguments
// $(SolutionDir)Dependencies\GLFW\include

// To link a library, go to project properties, linker, general, Additional Library Directories
// $(SolutionDir)Dependencies\GLFW\lib-vc2022


// Go to go to project properties, linker, input, Additional Dependencies --> Add the name
// of the library, relative to the path you added earlier.

// ----------------------- LINKING DYNAMICALLY <----------------------- 
// 1: place the dll in the same place as the executable



int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;
}