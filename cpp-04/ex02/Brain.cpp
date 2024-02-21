#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::string idea = "Idea ";
	setIdeas(idea);
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = copy.ideas[i];
	}
	std::cout << "Copy Constructor called of Brain" << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}

// Operators
Brain &Brain::operator=(const Brain &assign)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = assign.ideas[i];
	}
	std::cout << "Assign Operator called of Brain " << std::endl;
	return *this;
}

void Brain::printidea(int const &idea)
{
	if (idea < 100)
		std::cout << ideas[idea] << std::endl;
	else
		std::cout << "Index out of range" << std::endl;
}

void	Brain::set1Idea(std::string const &ideas, int const &idea)
{
	if (idea < 100)
		this->ideas[idea] = ideas;
	else
		std::cout << "Index out of range" << std::endl;
}

void Brain::setIdeas(std::string const ideas)
{
	if(ideas.empty())
		return ;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas;
	}
}
std::string const Brain::getIdea(size_t index) const
{
	if (index < 100)
		return ideas[index];
	return "Index out of range";
}
