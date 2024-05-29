#include <iostream>
#include <string>

std::string RemoveCharAll(std::string str, char CharToRemove)
{
	std::string result = "";
	for (char c : str)
	{
		if (c != CharToRemove)
			result += c;
	}
	return result;
}

int main()
{
	std::string str;
	std::cout << "Enter the string: ";
	std::cin >> str;
	char CharToRemove;
	std::cout << "Enter the letter for delet: ";
	std::cin >> CharToRemove;
	std::cout << RemoveCharAll(str, CharToRemove) << std::endl;
	return 0;
}