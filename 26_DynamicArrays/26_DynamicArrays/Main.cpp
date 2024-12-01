#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;	
}

// Make sure to pass the vectors by reference, as we don't wanna copy vectors like that.
void Function(const std::vector<Vertex>& vertices)
{

}

int main()
{
	std::vector<Vertex> vertices;
	vertices.push_back({ 1, 2, 3 });
	vertices.push_back({ 4, 5, 6 });

	Function(vertices);


	for (int i = 0; i < vertices.size(); i++)
	{
		std::cout << vertices[i] << std::endl;
	}

	// Will erase an specific object in a vector;
	vertices.erase(vertices.begin() + 1);

	std::cout << "------------- Vector Iteration --------------" << std::endl;
	// We can iterate through the vector with this syntax, which looks much cleaner;
	for (Vertex& v : vertices)
	{
		std::cout << v << std::endl;
	}
	// Will erase all the objects in the vector;
	vertices.clear();

}