#include <iostream>
#include <string>

int main()
{
	//if (s_Level > 5)
	//	s_Speed = 10;
	//else
	//	s_Speed = 5;

	static int s_Level = 101;
	static int s_Speed = 2;

	//s_Speed = s_Level > 5 ? 10 : 5;
	s_Speed = s_Level > 5  && s_Level < 100 ? s_Level > 10 ? 15 : 10 : 5;
	std::cout << s_Speed << std::endl;
	
	std::string rank = s_Level > 10 ? "Master" : "Beginner";
}