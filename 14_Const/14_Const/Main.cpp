#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
	int* p_X, *p_Y;
	int b_x;
	// 'MUTABLE' KEYWORD MAKES IT SO WE CAN MODIFY THE VARIABLE EVEN INSIDE A CONST METHOD
	mutable int var;

public:
	int GetX() const // MEANS THAT THIS METHOD WILL NOT MODIFY THE CLASS AND IT IS A READONLY METHOD
	{
		var = 3;
		return m_X;
	}

	const int* const GetP() const
	{
		return p_X;
	}

	int GetB()
	{
		return b_x;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	// BECAUSE THIS FUNCTION TAKES A REFERENCE TO ENTITY AND MAKES IT A CONST, ANY METHOD THAT I CALL IN THE FUNCTION BODY ALSO HAS TO BE CONST
	std::cout << e.GetX() << std::endl;
	std::cout << e.GetP() << std::endl;
	std::cout << e.GetB() << std::endl;
}





int main()
{
	const int MAX_AGE = 90;

	// CAN'T MODIFY THE VALUE/DATA OF THE POINTER
	const int* a = new int;

	// CAN'T MODIFY AT WHAT THE POINTER IS POINTING TO
	int* const b = new int;

	// CAN'T CHANGE ANYTHING LMAO
	const int* const c = new int;

	*a = 2;
	b = MAX_AGE;
	b = nullptr;



}