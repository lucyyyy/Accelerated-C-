// These two questions explore on string concatenation
// 1-1
#include <iostream>
#include <string>

int main()
{
	const std::string hello="Hello";
	const std::string message=hello+", world"+"!";

	std::cout << message;


	return 0;
}

// 1-2
#include <iostream>
#include <string>

int main()
{
	const std::string exclam="!";
	const std::string message="Hello"+", world"+exclam;

	std::cout << message;


	return 0;
}
// The second one is not valid, since + cannot connect two string literals. But the 1-1 first combine the first two as a new string,
// so it could work.
