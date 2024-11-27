#include <iostream>
#include <string>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

int* CreateArray()
{
	// This will fail because you are creating the array on the stack; and the stack will be terminated when the function is completely called.
	//int array[50];

	// This works because... heap! :D
	int* array = new int[50];
	return array;
}

class ScopedPtr
{
private:
	Entity* m_Ptr;

public:
	ScopedPtr(Entity* ptr) : m_Ptr(ptr)
	{
	}

	~ScopedPtr()
	{
		delete m_Ptr;
	}
};


int main()
{
	// Stack allocation; will call constructor and destructor automatically;
	Entity e;

	// Heap allocation; will call constructor but **NOT** destructor;
	Entity* e2 = new Entity;

	delete e2;

	{
		// Scoped pointer allocation... smart pointer / unique pointer.
		ScopedPtr e = new Entity();
	}



}