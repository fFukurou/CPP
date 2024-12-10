#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
 

std::string GetName()
{
	return "Cherno";
}

int main()
{
	auto name = GetName();
	auto b = name;
	std::cout << b << std::endl;

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

	for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}