#include <iostream>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name) : m_Name(name), m_Age(-1) {}

	// 'EXPLICIT' will disable the implicit functionality, meaning, it only takes an explicit definition;
	explicit Entity(int age) : m_Name("unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	// Printing stuff idk
}

int main()
{
	Entity a("Cherno");
	Entity b(22);
	// This implicitly converts 33 into an Entity because it has a constructor that takes an int age;
	Entity b2 = 22;
	// This works because the function takes an Entity, and the Entity class has a constructor that takes an int age;
	PrintEntity(22);
	// This doesn't work because it would need 2 implicit conversions... one to convert the const char[] into an std::string, and one to convert that into an Entity constructor;
	PrintEntity("fFukurou");
	// Workaround:
	PrintEntity(Entity("fFukurou"));
	PrintEntity(std::string("fFukurou"));

}