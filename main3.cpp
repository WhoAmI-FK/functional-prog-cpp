#include <iostream>
#include <functional>
#include <string>
#include <vector>


void demoFunction()
{
	std::cout << "Called demoFunction " << std::endl;
}


void adder(int a, int b)
{
	std::cout << "Called adder, a + b = " << a + b << std::endl;
}


class functor {
public:
	void operator()()const {
		std::cout << "Called functor" << std::endl;
	}
};
/*
int main()
{
	std::vector<std::function<void()>>funcs;
	funcs.push_back(demoFunction);

	functor functor_instance;
	funcs.push_back(functor_instance);
	funcs.push_back([]() {
		std::cout << "Called anonymous lambda" << std::endl;
		});
	funcs.push_back(std::bind(&adder, 10, 15));
	for (auto& f : funcs)
	{
		f();
	}

	return 0;
}
*/