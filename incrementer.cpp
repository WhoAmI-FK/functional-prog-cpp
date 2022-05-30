#include <iostream>

auto incrementer = []()
{
	auto increment = 0;
	return [increment]() mutable {
		return increment++;
	};
};

/*
int main()
{
	auto myInc = incrementer();
	std::cout << "myInc = " << myInc() << std::endl;
	std::cout << "myInc = " << myInc() << std::endl;
	std::cout << "myInc = " << myInc() << std::endl;
	std::cout << "myInc = " << myInc() << std::endl;


	return 0;
}
*/