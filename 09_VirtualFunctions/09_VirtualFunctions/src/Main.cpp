#include <iostream>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};





class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity Class"; }

};



class Player : public Entity
{
private:
	std::string m_Name;

public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player Class"; }
};


void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void PrintClass(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}


int main()
{
	Entity* e = new Entity();
	Player* p = new Player("fFukurou");

	PrintName(e);
	PrintName(p);

	std::cout << e->GetName() << std::endl;
	std::cout << p->GetName() << std::endl;
	PrintClass(e);
	PrintClass(p);


}