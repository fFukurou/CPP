#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z) : x(x), y(y), z(z) { }

	// Copy constructor
	Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}


int main()
{
	std::vector<Vertex> vertices; //vertices(3) wouldn't work here because it would try to create 3 objects, and we just wanna allocate memory for it.
	// "Wrong" way of doint it. Copy constructor will be called 6 times.
	// Problem 1: Vector is being created in th stack of main, then needs to be copied to the proper place in the heap.
	// Problem 2: Every time we exceed the capacity of a Vector, it creates another one and copies itself to that new one with more allocated memory.
	// vertices.push_back(Vertex( 1, 2, 3 ));
	// vertices.push_back(Vertex( 4, 5, 6 ));
	// vertices.push_back(Vertex( 7, 8, 9 ));

	// Reserving necessary memory for the vector.
	vertices.reserve(3);
	// We use emplace_back() instead of push_back() to construct an object in that memory place instead of main;
	vertices.emplace_back( 1, 2, 3 );
	vertices.emplace_back( 4, 5, 6 );
	vertices.emplace_back( 7, 8, 9 );

	// Code is optimized and console will be clean.

}