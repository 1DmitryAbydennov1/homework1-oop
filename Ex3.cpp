#include <iostream>

void cubeR(int& r)
{
	r = r*r*r;
}

int main()
{
	int a = 5;
	cubeR(a);
	std::cout << a << std::endl;
}
