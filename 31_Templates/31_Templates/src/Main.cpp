#include <iostream>
#include <string>	

// This isn't an actual created/compiled function. It is created when we call it based on the type passed;
template <typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}

// This will not get called
void Print(int value)
{
	std::cout << "bruh" << std::endl;
	std::cout << value << std::endl;
}

template<typename T, int N>
class Array
{
private:
	T  m_Array[N];
public:
	int GetSize() const { return N; }
};




int main()
{
	Print<int>(5);
	Print<std::string>("Hello");
	Print(5.5f);

	Array<std::string, 13> array;
	std::cout << array.GetSize() << std::endl;

}