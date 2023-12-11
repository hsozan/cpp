#include "MutantStack.hpp"

int main()
{
	// --------------------------------- INTS ---------------------------------
	std::cout << std::endl <<CYAN<< "INTS:" <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	while (it != ite)
	{
		std::cout <<YELLOW<< "Iterator: " <<GREEN<< *it <<RESET<< std::endl;
		++it;
	}
	std::stack<int>	s(mstack);
	std::cout <<YELLOW<< "Top: " <<GREEN<< s.top() <<RESET<< std::endl;
	std::cout <<YELLOW<< "Size: " <<GREEN<< s.size() <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;

	// --------------------------------- CHARS ---------------------------------
	std::cout << std::endl <<CYAN<< "CHARS:" <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;
	MutantStack<char>	mstack2;
	mstack2.push('a');
	mstack2.push('b');
	mstack2.push('c');
	mstack2.push('d');
	mstack2.push('e');
	mstack2.push('f');
	mstack2.push('g');
	MutantStack<char>::iterator	it2 = mstack2.begin();
	MutantStack<char>::iterator	ite2 = mstack2.end();
	while (it2 != ite2)
	{
		std::cout <<YELLOW<< "Iterator: " <<GREEN<< *it2 <<RESET<< std::endl;
		++it2;
	}
	std::cout <<YELLOW<< "Top: " <<GREEN<< mstack2.top() <<RESET<< std::endl;
	std::cout <<YELLOW<< "Size: " <<GREEN<< mstack2.size() <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;

	// --------------------------------- STRINGS ---------------------------------
	std::cout << std::endl <<CYAN<< "STRINGS:" <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;
	MutantStack<std::string>	mstack3;
	mstack3.push("Hello");
	mstack3.push("World");
	mstack3.push("!");
	mstack3.push("How");
	mstack3.push("Are");
	mstack3.push("You");
	mstack3.push("?");
	MutantStack<std::string> mstack4;
	mstack3.swap(mstack4);
	MutantStack<std::string>::iterator	it3 = mstack4.begin();
	MutantStack<std::string>::iterator	ite3 = mstack4.end();
	while (it3 != ite3)
	{
		std::cout <<YELLOW<< "Iterator: " <<GREEN<< *it3 <<RESET<< std::endl;
		++it3;
	}
	std::cout <<YELLOW<< "Top: " <<GREEN<< mstack4.top() <<RESET<< std::endl;
	std::cout <<YELLOW<< "Size: " <<GREEN<< mstack4.size() <<RESET<< std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;
	//system("leaks Abomination");
}