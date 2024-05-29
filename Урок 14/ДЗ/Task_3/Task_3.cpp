#include <iostream>
#include <string>

std::string InsertChar(std::string str, int index, char CharToInsert) {
    if (index < 0 || index > str.length()) {
        return str;
    }
    str.insert(index, 1, CharToInsert);
    return str;
}

int main() {
    std::string str;
    std::cout << "Enter the string: ";
    std::cin >> str;
    int index;
    std::cout << "Enter the index: ";
    std::cin >> index;
    char charToInsert = 'X';
    std::cout << "Enter the letter: ";
    std::cin >> charToInsert;
    std::cout << InsertChar(str, index, charToInsert) << std::endl;
    return 0;
}