#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << "MY NAME IS " << Name << std::endl;
	}
};

int main()
{
	Player player;
	player.Move(5, 5);
	player.X = 2;
	player.Y = 5;

	std::cout << player.Y << std::endl;
	std::cout << player.Y << std::endl;
	player.Name = "fFUKUROU";

	player.PrintName();
}