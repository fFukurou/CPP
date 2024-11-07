#include <iostream>	

extern int s_Variable;


struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}

};

int Entity::x;
int Entity::y;

int main()
{
	//std::cout << s_Variable << std::endl;
	Entity e; // Is doing nothing btw

	Entity::x = 2;
	Entity::y = 3;
	

	Entity e1; // Is doing nothing btw
	Entity::x = 5;
	Entity::y = 8;

	e.Print();
	e1.Print();
}