#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    int        contactCount;
    Contact    contactList[8];
public:
    PhoneBook();
    ~PhoneBook();
    std::string cutLettersToTen(const std::string str);
    void setContactList(Contact contact, int index);
    void print(void);
    int getContactCount(void);
};
#endif