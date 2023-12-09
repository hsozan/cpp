#include "Contact.hpp"
#include "GetLine.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <ctype.h>


std::string strtoLower(std::string str)
{
    char *cstr;
    int l=str.length();
    cstr = new char[l + 1];
    strcpy(cstr, str.c_str());
    for(int i = 0; i < l; i++)
        cstr[i] = tolower(cstr[i]);
    std::cout << cstr << std::endl;
    str = cstr;
    delete[] cstr;
    return (str);
}

int main()
{
    int index;
    int result;
    Contact contact;
    PhoneBook phoneBook;
    std::string selection;
    GetLine getLine;
    index = 0;
    result = 0;
    //write colored welcome message
    std::cout << "\033[1;32mWelcome to PhoneBook\033[0m" << std::endl;
    while (true)
    {
        std::cout << std::endl
                    << "\033[1;33mPlease enter a command (ADD, SEARCH, EXIT)\033[0m" << std::endl;
        //use GetLine function to get input
        selection = strtoLower(getLine.Run("Command", selection).getText());

        if (std::cin.eof())
            exit(1);
        if (!selection.compare("add"))
        {
            result = contact.read();
            if (result != -1)
            {
                phoneBook.setContactList(contact, index);
                index = phoneBook.getContactCount();
            }
        }
        else if (!selection.compare("search"))
        {
            phoneBook.print();
        }
        else if (!selection.compare("exit"))
        {
            std::cout << "Goodbye!" << std::endl;
            break ;
        }
        else if (selection.length() > 0)
            std::cout << "This command dosen't exist." << std::endl;
    }
    return (0);
}
