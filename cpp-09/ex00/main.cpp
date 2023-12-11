#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    BitcoinExchange A;
    if (ac == 2)
    {
        try
        {
            A.ReadBase();
            A.ReadInput(av[1]);
        }
        catch(const std::exception& e)
        {
            cout << e.what() << endl;
        }
    }
    else
        cout << "Error: could not open file"<< endl;
}
