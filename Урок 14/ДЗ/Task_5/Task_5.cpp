#include <iostream>
#include <string>

int main() {
    std::string str;
    char letter;
    int count = 0;

    std::cout << "Enter string: ";
    std::getline(std::cin, str);

    std::cout << "Enter letter: ";
    std::cin >> letter;

    for (char c : str) {
        if (c == letter) {
            count++;
        }
    }

    std::cout << "Letter '" << letter << "' meets " << count << " once." << std::endl;

    return 0;
}