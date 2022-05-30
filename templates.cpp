#include <iostream>
#include <vector>

template<typename T>
T cube(const T& value)
{
	return value * value * value;
}

template<int toCube> 
struct Cube {
	enum {
		value = toCube*toCube*toCube
	};
};





int factorial(const int input, const int sum = 1)
{
	if (input > 1) {
		return factorial(input - 1, sum * input);
	}
	return sum;
}


template<int input, int sum = 1>
struct Factorial : Factorial<input - 1, input* sum>
{

};

template<int sum>
struct Factorial<1, sum> {
	enum {
		value = sum
	};
};


template<int num>
struct Fibonacci
{
	enum {
		value = Fibonacci<num-1>::value+Fibonacci<num-2>::value
	};
};


template<>
struct Fibonacci<0> {
	enum {
		value = 0
	};
};

template<>
struct Fibonacci<1> {
	enum {
		value = 1
	};
};

/*
int main()
{
	std::cout << "8 cubed = " << cube(8) << std::endl;
	std::cout << "5 cubed = " << Cube<5>::value << std::endl;
	std::cout << "5! = " << factorial(5) << std::endl;
	std::cout << "Factorial<4> " << Factorial<4>::value << std::endl;
	std::cout << "Factorial<5> " << Factorial<5>::value << std::endl;
	std::cout << "Fibonacci<11> " << Fibonacci<11>::value << std::endl;
	return 0;
}
*/