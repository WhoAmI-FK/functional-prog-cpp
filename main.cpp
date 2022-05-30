//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

/*
int main()
{
	auto render = [](auto collection) {
		for (const auto& val : collection)
		{
			std::cout << val << std::endl;
		}
	};
	std::vector<int> inCollection{
		1,2,3,4,5,6,7,8,9,10
	};
	std::vector<int> outCollection;
	std::transform(inCollection.begin(), inCollection.end(),
		std::back_inserter(outCollection),
		[](const int& val) {
			return val * 3;
		});
	std::cout << "Transofrm" << std::endl;
	render(outCollection);


	std::vector<int> filteredCollection;
	std::copy_if(outCollection.begin(), outCollection.end(),
		std::back_inserter(filteredCollection),
		[](auto& value)
		{
			return value % 2 != 0;
		}
		);
	std::cout << "copy_if" << std::endl;
	render(filteredCollection);

	int results = std::accumulate(filteredCollection.begin(),
		filteredCollection.end(),
		0,
		[](auto total, auto current) {
			return total + current;
		}
	);
	std::cout << "accumulate" << std::endl;
	std::cout << "results = " << results << std::endl;

	return 0;
}
*/