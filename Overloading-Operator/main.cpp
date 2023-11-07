#include "Rational.h"
#include <iostream>

int main()
{
	Rational x(1, 2), y(1, 4), z, n(10);
	x += y;
	std::cout <<"x is " << x << " and y is " << y << " and n is " << n << std::endl; // 3/4 1/4 10/1
	
	
	//
	std::cout << "\nx + y = " << x + y << std::endl; // 1/1
	std::cout << "x - y = " << x - y << std::endl;// 1/2
	std::cout << "x * y = " << x * y << std::endl; // 3/16
	std::cout << "x / y = " << x / y << std::endl;// 3/1

	x += y;
	std::cout << "\nAfter x += y:\n  x is " << x << " and y is " << y << std::endl; // 1/1 1/4
	x -= y;
	std::cout << "After x -= y:\n  x is " << x << " and y is " << y << std::endl;// 3/4 1/4
	x *= n;
	std::cout << "After x *= n:\n  x is " << x << " and n is " << n << std::endl;// 15/2 10/1
	x /= n;
	std::cout << "After x /= n:\n  x is " << x << " and n is " << n << std::endl;// 3/4 10/1
}
