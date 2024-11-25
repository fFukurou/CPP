#include <iostream>

class Entity
{
private:
	std::string n_Name;

public:
	std::string& GetName() { return n_Name; }
};

// Mixing malloc / free and new / delete is discouraged because they operate differently :
//
// NEW / DELETE are for objects and handle constructors / destructors.
// MALLOC / FREE are for raw memory allocation and do not involve constructors / destructors.


int main()
{
	int a = 2;
	int* b = new int[50]; // 200 bytes -> 50 * 4

	// The 'new' operator also calls the constructor
	Entity* e = new Entity[50];

	Entity* e1 = new Entity();

	Entity* e2 = (Entity*)malloc(sizeof (Entity));

	// 'delete' will also call the destructor
	// 'free' won't
	delete[] e;
	delete e1;
	free(e2);

}