#include <iostream>

struct Vector2
{
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	// Overload the * operator to know how to deal with multiplying objects from the Vector2 class, it multiplies their x and y;
	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	// Overloading the == operator to understand how to compare Vector2 objects, it compares their x and y, and return a boolean value;
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other) const
	{
	// This works because we taught our program how to compare objects from the class Vector2 with overloading already, so now we can use it and reverse it.
		return !(*this == other);
	}
	
};

// Overloading the << operator to print Vector2 class
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	//Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;

	std::cout << result2 << std::endl;

	if (result2 == result2)
	{
		std::cout << "Vector 1 (" << result2 << ") and Vector 2 (" << result2 << ") are the same..." << std::endl;
	}

	if (result2 != result2)
	{
		std::cout << "Vector 1 (" << result2 << ") and Vector 2 (" << result2 << ") are the same..." << std::endl;
	}

}