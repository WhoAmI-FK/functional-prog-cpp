#include <iostream>

auto continuousAdd_v1 = [](auto& initial) {
	return [&initial](auto addBy) mutable {
		initial += addBy;
	};
};

auto continuousAdd_v2 = [](int initial, int addBy)
{
	auto total = initial;
	return [total, addBy]() mutable {
		total += addBy;
		return total;
	};
};

/*
int main()
{
	int init = 0;
	continuousAdd_v1(init)(10);
	std::cout << init << std::endl;
	continuousAdd_v1(init)(20);
	std::cout << init << std::endl;

	return 0;
}
*/