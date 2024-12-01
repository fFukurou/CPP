#include <iostream>
#include <string>

struct Vector2
{
	float x, y;
};


class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	// Copy constructor --> takes a reference to the same class
	// How to NOT allow copy constructors -> String(const String& other) = delete;
	String(const String& other) : m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
		std::cout << "Object copied!" << std::endl;
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string); 
};

std::ostream& operator<<(std::ostream& stream, const String& string)
	{
		stream << string.m_Buffer;  
		return stream;
	}

// If you don't put the '&' in here, it will actually copy the string into a local variable, calling the copy constrcutor
void PrintString(const String& string)
{
	// String copy = string; --> If you actually want a copy.
	std::cout << string << std::endl;
}

int main()
{
	int a = 2;

	int b = a;

	// a remains 2, b changes to 3; pretty standard stuff;
	b = 3;

	// Both av and bv will be pointing to the same object in memory because........ they are pointers;
	Vector2* av = new Vector2();
	Vector2* bv = av;
	bv->x = 2;

	String string  = "ChErno";
	String second = string;
	
	second[2] = 'A';

	// This will crash because it will ocuppy the same memory address... you're trying to delete something that was already deleted;
	PrintString(string);
	PrintString(second);

}