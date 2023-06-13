#include <iostream>
#include <fstream>
#include <sstream>
int main(int ac, char **av){
    if (ac != 4)
        return (std::cerr << "\033[0;31m" << 
		"Wrong number of arguments - Need 3 args (Filename, string to search for and replacement string)" 
		<< "\033[0m" << std::endl, 1);
	if(av[2][0] == '\0' || av[3][0] == '\0')
		return (std::cerr << "\033[0;31m" << "String to search for or replacement string is empty" << "\033[0m" << std::endl, 1);
    (void) ac;
    std::ifstream inFile;
    std::ofstream outFile;
    
	inFile.open(av[1]);
    outFile.open((std::string)av[1] + ".replace", std::iostream::trunc);
    
	if (!inFile.is_open() || !outFile.is_open())
		return (std::cerr << "Error : " << std::strerror(errno) << std::endl, 1);
    
	std::stringstream stream;
	stream << inFile.rdbuf();
	
	std::string tmp = stream.str();
	size_t i = 0;
    
	while ((i = tmp.find(av[2], i)) != std::string::npos){
        tmp.erase(i, strlen(av[2]));
        tmp.insert(i, av[3]);
        i += strlen(av[3]);
    }
    outFile << tmp;
    inFile.close();
    outFile.close();
    return (std::cout << "File " << "\033[0;36m" << av[1] << "\033[0m" << " modified as " 
	<< "\033[0;36m" << av[1] << ".replace" << "\033[0m" << std::endl, 0);
}

