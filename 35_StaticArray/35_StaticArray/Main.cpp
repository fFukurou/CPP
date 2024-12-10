#include <iostream>
#include <array>

void PrintArray(const std::array<int, 5>& data)
{
	for (int i = 0; i < data.size(); i++);
}

int main()
{
	std::array<int, 5> data;
	data[0] = 2;
	data[4] = 1;

	int data[5];
	data[0] = 0;
	data[5] = 2;

}