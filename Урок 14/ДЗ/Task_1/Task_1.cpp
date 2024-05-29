#include <iostream>
#include <string>

std::string RemoveChar(std::string str, int index)
{
	if (index < 0 || index >= str.length())
	{
		return str;
	}
	str.erase(index, 1);
	return str;
}
int main()
{
	std::string str;
	std::cout << "Enter the string: ";
	std::cin >> str;
	int index;
	std::cout << "Enter the index for delet: ";
	std::cin >> index;
	index -= 1;
	std::cout << RemoveChar(str, index) << std::endl;
}