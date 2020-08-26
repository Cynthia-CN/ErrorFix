#include <iostream>
void BadIndirectionOperandFunction()
{
	char *a;
	std::cin << a;
}