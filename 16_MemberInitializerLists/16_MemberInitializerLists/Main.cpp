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

	const std::string& GetName() const { return m_Name;  }
};


int main()
{
	Entity e0;
	Entity e1("fFukurou");

	std::cout << e0.GetName() << std::endl;
	std::cout << e1.GetName() << std::endl;
}