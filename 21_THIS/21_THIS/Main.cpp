#include <iostream>

class Entity;
void PrintEntity(Entity* e); // Declare function (optional)

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		// 'this' is actually Entity* e;
		this->x = x;
		this->y = y;

		PrintEntity(this);
	}

};

void PrintEntity(Entity* e)
{
	std::cout << "X = " << e->x <<", Y = " << e->y << std::endl;
}

int main()
{
	Entity e(2, 6);
	
}