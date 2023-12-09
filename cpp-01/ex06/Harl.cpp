#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	enum ilevel {DEBUG, INFO, WARNING, ERROR};
	int n = 0;
	std::string ftab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (; n < 5; n++)
		if (ftab[n] == level)
			break ;
	switch (n)
	{
		case DEBUG :
			Harl::debug();
		case INFO :
			this->info();
		case WARNING :
			this->warning();
		case ERROR :
			this->error();
			break;
		default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
	return ;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}