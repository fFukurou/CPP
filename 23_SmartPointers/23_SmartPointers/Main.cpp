#include <iostream>
#include <string>
#include <memory>

// UNIQUE POINTERS: scoped pointer; When the pointer goes out of scope, it will get destroyed and call the destructor. 
// Is it the only reference to that pointer that you want.
// SHARED POINTERS: keeps track of how many references you have to your pointer. Once the nº of references reaches 0, it gets deleted.


class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	void Print() {}

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

	{
		std::unique_ptr<Entity> entity(new Entity());

		// This is the prefered way of making unique pointers; if the constructor throws an exception, you won't have a dangling pointer (w/ no reference);
		std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
		entity->Print();

	}

	{
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		std::shared_ptr<Entity> shared2 = sharedEntity;
		std::weak_ptr<Entity> weakEntity = shared2;
	}
	 
}