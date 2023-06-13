#include <iostream>

std::string ft_strupcase(std::string str) {
    for(int i = 0; i < (int)str.length(); i++)
        str[i] = toupper(str[i]);
    return str;
}

int main(int c, char **a) {
    if(c == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if(c >= 2) {
        for(int i = 1; i < c; i++) 
            std::cout << ft_strupcase(a[i]);
        std::cout << std::endl;
        }
        return 0;
}