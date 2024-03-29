#include "BitcoinExchange.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		cout << "Error: could not open file."<< endl;
		exit(1);
	}
	std::map<std::string, double> _data = readData();
	checkInput(argv[1], _data);
	return 0;
}