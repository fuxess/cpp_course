#include <iostream>
#include <string>

int main()
{
    int i = 0, digit = 0, letter = 0;
    std::string str;
    std::cout << "Enter string: ";
    std::cin >> str;

    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9') digit++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) letter++;
        i++;
    }

    std::cout << "digit=" << digit << "\nletter=" << letter << "\nother=" << i - digit - letter << "\n";
    return 0;
}