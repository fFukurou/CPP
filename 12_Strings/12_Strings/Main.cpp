#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}


int main()
{
	const char* name = "fFukurou";
	char name2[9] = { 'f', 'F', 'u', 'k', 'u', 'r', 'o', 'u', 0};
	std::string quote = std::string("Ikikata wa ") + "Kimetta";
	std::string quote2 = "Ore ga konoyo ni umareta ";
	quote2 += "kara da.";



	std::cout << name << std::endl << std::endl;
	std::cout << name2 << std::endl;
	std::cout << quote << std::endl;
	PrintString(quote2);

	bool contains = quote.find("Kimetta") != std::string::npos;
	std::cout << "Does the quote contain the string 'Kimetta'? " << std::endl;
	std::cout << contains << std::endl;


}