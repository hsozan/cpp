#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	// Constructors
	Brain();
	Brain(const Brain &copy);

	// Destructor
	~Brain();

	// Operators
	Brain &operator=(const Brain &assign);

	// Getters and Setters
	std::string const getIdea(size_t index) const;
	void	set1Idea(std::string const &ideas, int const &idea);
	void	printidea(int const &idea);
	void	setIdeas(std::string const ideas);

protected:
	std::string ideas[100];
};

#endif
