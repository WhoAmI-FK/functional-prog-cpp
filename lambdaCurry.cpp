#include <iostream>

auto addCurry = [](auto a) {
	return [a](auto b) {
		return [a, b](auto c) {
			return a + b + c;
		};
	};
};

/*
int main()
{
	auto added1 = addCurry(1);
	auto added2 = added1(10);
	auto addResults = added2(100);
	std::cout << "results: " << addResults << std::endl;
	auto allAtOnce = addCurry(990000)(9900)(99);
	std::cout << "All results: " << allAtOnce << std::endl;
	return 0;
}
*/