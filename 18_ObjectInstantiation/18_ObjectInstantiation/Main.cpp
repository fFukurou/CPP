#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Score = 0;
public:
	Entity() : m_Name("Unknown"), m_Score(0)
	{

	}

	Entity(const std::string& name) : m_Name(name)
	{

	}

	const std::string& GetName() const { return m_Name; }
};


int main()
{
	// Stack creation
	Entity entity;
	std::cout << entity.GetName() << std::endl;

	// Heap allocation --> When Stack is not big enough, or you want the variables to live outside the lifetime of the scope.
	Entity* e;
	{
		Entity* entity = new Entity("Cherno");
		e = entity;
		std::cout << entity->GetName() << std::endl;
		std::cout << e->GetName() << std::endl;
	}

		delete e;

}