#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "Enter string: ";
    std::getline(std::cin, str);

    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }

    std::cout << str << std::endl;
    return 0;
}