#include <string>
#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Adress List" << std::endl;
	std::cout << "String address : " << &brain << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << "\n" << std::endl;

	std::cout << "Value List " << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
}