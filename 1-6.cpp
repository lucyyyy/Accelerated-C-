
#include <iostream>
#include <string>

int main()
{
	std::cout<<"What is your name?";
	std::string name;
	std::cin>>name;
	std::cout<< "Hello, "+name
             << std::endl<<"And what is yours?";
    std::cin>> name;
    std:: cout<<"Hello, "+name
              << ";Nice to meet you,too!"<<std::endl;
	return 0;
}

// About cin buffer operations, it at first has the first word, while cout, it flushes out it; and then read another. [just my guess]
