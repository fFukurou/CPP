#include <iostream>

class Singleton
{
private:
	Singleton()
	{
		std::cout << "Singleton instance created!" << std::endl;
	}
	// Delete the copy constructor and assignment operator
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}


	void Hello() 
	{ 
		std::cout << "Hello from Singleton!" << std::endl;
	}
};



void Function()
{
	// static here means that the variable will live in the memory of the program, instead of just this one scope;
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}


int main()
{
	for (int i = 0; i < 5; i++)
	{
		Function(); 
	}

	Singleton& instance = Singleton::Get();
	instance.Hello();

	// This does not create another instance of the class, just uses the Singleton already crated in memory and points to it.
	Singleton& instance2 = Singleton::Get();
	instance2.Hello();

	// Uncommenting the line below will cause a compile-time error
	//Singleton anotherInstance; // Constructor is private!
}