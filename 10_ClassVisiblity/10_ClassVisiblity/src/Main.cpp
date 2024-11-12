#include <iostream>	

class Entity
{
protected:
	int X, Y;

public:
	Entity()
	{
		X = 0;
		Y = 1;
	}

private:
	std::string ShowPassword() { return "password123lmao"; }

};

class Player : public Entity
{
	Player()
	{	// can access it, because it is only protected
		X = 2;

		// this one cannot be accessed, since it is private
		ShowPassword();
	}



};


int main()
{
	Entity entity;
	entity.X = 2;
}