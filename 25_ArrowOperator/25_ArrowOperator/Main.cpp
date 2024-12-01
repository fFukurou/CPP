#include <iostream>
#include <string>

// the Arrow operator will basically simply dereference the object;
// can also used to find the offset of a variable in memory
struct Vector3
{
	float x, y, z;
};

class Entity
{
private:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj; 

public:
	ScopedPtr(Entity* entity) : m_Obj(entity) {}

	~ScopedPtr()
	{
		delete m_Obj;  
	}

	Entity* operator->()
	{
		return m_Obj;
	}

	const Entity* operator->() const
	{
		return m_Obj;
	}

};


int main()
{
	Entity e;
	e.Print();

	Entity* ptr = &e;

	ptr->Print();

	const ScopedPtr entity = new Entity();
	entity->Print();

	// Finding the offset.
	std::cout << "Finding the offset using the Arrow Operator ->" << std::endl << std::endl;
	// Here the offset is going in 4 to 4 bytes because the size of an integer is 4;
	int offset = (int)&((Vector3*)nullptr)->z; // Change z into x or y to see offsets;
	std::cout << offset << std::endl;

}