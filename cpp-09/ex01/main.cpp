#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include "Colour.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Error: No inverted Polish mathematical expression provided." << endl;
        return 1;
    }

    std::stack<int> numbers;

    std::istringstream ss(argv[1]);

    std::string token;
    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (numbers.size() < 2) {
                cout << "Error: Insufficient operands for " << token << " operator." << endl;
                return 1;
            }
            int n2 = numbers.top(); numbers.pop();
            int n1 = numbers.top(); numbers.pop();
            int result;
            if (token == "+")
                result = n1 + n2;
            else if (token == "-")
                result = n1 - n2;
            else if (token == "*")
                result = n1 * n2;
            else if (token == "/") {
                if (n2 == 0) {
                    cout << "Error: Division by zero." << endl;
                    return 1;
                }
                result = n1 / n2;
            }
            numbers.push(result);
        }
        else {
            for(int i=0; token[i] !='\0'; i++) {
                if(token[i] < '0' || token[i] > '9') { 
                    cout << "Error: bad input." << endl;
                    return 1;
                }
            }
            int num = atoi(token.c_str());
            numbers.push(num);
        }
    }

    if (numbers.size() != 1) {
        cout << "Error: Invalid input expression." << endl;
        return 1;
    }
    
    cout << numbers.top() << endl;
    return 0;
}