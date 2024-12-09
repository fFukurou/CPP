// Configure the main project as an .exe
// Project Properties -> General -> Configuration Type

// Configure the secondary project as an .lib

// Messy and not ideal
//#include "../../Engine/src/Engine.h";


// Go to Project Properties, C++, General, Additional Include Directories
// $(SolutionDir)Engine/src;
#include "Engine.h"; // <-- Now we can include a path that is relative to path we added above.
#include "Physics.h"
#include <iostream>

// Now right-click the engine and then click "build". It will generate a .lib file to be linked;

// Since the Engine(secondary) project is in the solution, we can right click the main project ->
// Add -> Reference -> Projects -> Solution -> Select the secondary Project (Engine)
// That will load the .lib file into our executable;

// Now the Main Project depends on Engine, so compiling Main will actually compile Engine first to
// make sure everything is up to date;

int main()
{
	engine::PrintMessage();
	int number = physics::CalculatePhysics();
	std::cout << number << std::endl;
}