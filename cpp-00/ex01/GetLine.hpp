#ifndef GETLINE_HPP
#define GETLINE_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class GetLine
{
private:
    int error;
    std::string text;
public:
    GetLine();
    ~GetLine();
    GetLine Run(std::string type, std::string text);
    int getError();
    std::string getText();
};



#endif