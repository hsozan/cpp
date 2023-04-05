#include <iostream>

using namespace std;

string ft_strupcase(string str) {
    for(int i = 0; str[i]; i++) {
        str[i]= toupper(str[i]);
    }
    return str;
}

int main(int argc, char **argv) {
    int i = 1;
    if(argc == 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return 0;
    }
    else if(argc >= 2) {
        while(argv[i] && i < argc) {
            cout << ft_strupcase(argv[i]);
            i++;
        }
        cout << endl;
        }
        return 0;

    return 0;
}