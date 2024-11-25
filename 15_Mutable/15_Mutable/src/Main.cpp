#include <iostream>


class Entity
{
private:
	std::string m_Name = "Bruh";
	mutable int m_DebugCount = 0;

public:
	const std::string& GetName() const 
	{
		m_DebugCount++;
		return m_Name; 
	}

};



int main()
{
	const Entity e;
	std::cout << e.GetName() << std::endl;

	// This below really doesn't happen often...
	int x = 8;
	auto f = [=]() mutable // [&, =]
		{
			x++;
			std::cout << x << std::endl;
		};

	f();
	std::cout << x << std::endl;
	// x = 8;
}