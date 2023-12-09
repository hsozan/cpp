#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor called" << std::endl;
}

std::string PhoneBook::cutLettersToTen(const std::string str)
{
    std::string temp;

    if (str.length() > 10)
        temp = str.substr(0, 9) + ".";
    else
        temp = str;
    return (temp);
}
void PhoneBook::setContactList(Contact contact, int index)
{
    if (contact.getName().length() > 0)
        contactList[index % 8].setName(contact.getName());
    if (contact.getSurName().length() > 0)
        contactList[index % 8].setSurName(contact.getSurName());
    if (contact.getNickName().length() > 0)
        contactList[index % 8].setNickName(contact.getNickName());
    if (contact.getPhone().length() > 0)
        contactList[index % 8].setPhone(contact.getPhone());
    if (contact.getDarketSecret().length() > 0)
        contactList[index % 8].setDarketSecret(contact.getDarketSecret());
    this->contactCount++;
}


void PhoneBook::print(void)
{
    int i;
    std::string index;
    i = -1;
    if (this->contactCount > 8)
        this->contactCount = 8;
    std::cout <<
    "\033[1;36m" << std::setw(10) << "Index" << "\033[0m" << "|" <<
    "\033[1;36m" << std::setw(10) << "Name" << "\033[0m" << "|" <<
    "\033[1;36m" << std::setw(10) << "SurName" << "\033[0m" << "|" <<
    "\033[1;36m" << std::setw(10) << "NickName" << "\033[0m" << "|" << std::endl;

    while (++i < this->contactCount)
    {
        std::cout <<
        std::setw(10) << i+1 << "|" <<
        std::setw(10) << cutLettersToTen(contactList[i].getName()) << "|" << 
        std::setw(10) << cutLettersToTen(contactList[i].getSurName()) << "|" << 
        std::setw(10) << cutLettersToTen(contactList[i].getNickName()) << "|" << std::endl;
    }
    std::cout << "select an index number" << " : ";
    if (!(std::getline(std::cin, index)))
        exit(1);
    if (std::cin.eof())
        exit(1);
    if (index.length() <= 0 || index[0] < '1' || index[0] > '8'|| index.length() > 1)
        {
        std::cout << "Input Error!" << std::endl;
        return ;
        }
    i = index[0] - '0'-1;
    std::cout << "Index : " << i+1 << std::endl <<
    "Name  : " << contactList[i].getName() << std::endl <<
    "SurName : " << contactList[i].getSurName() << std::endl <<
    "NickName : " << contactList[i].getNickName() << std::endl <<
    "Phone : " << contactList[i].getPhone() << std::endl <<
    "DarketSecret : " << contactList[i].getDarketSecret() << std::endl;
}

int PhoneBook::getContactCount(void)
{
    return (this->contactCount);
}