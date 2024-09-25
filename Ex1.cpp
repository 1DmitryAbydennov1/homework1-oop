#include <iostream>

namespace myspace
{
	void printNTimes(const char* str, int n = 10)
	{
		int i = 0;
		for (i = 0;i <n;i++)
			std::cout << str;
	}
}

int main()
{
	const char* str = "he";
	myspace::printNTimes(str);
}