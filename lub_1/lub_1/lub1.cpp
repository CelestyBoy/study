// lub1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>
#include <stdio.h>
#include <iostream>


int main()
{
	double x, y;
	double result;

	std::cout << "Please enter the value for X: ";
	std::cin  >> x;
	std::cout << "Please enter the value for Y: ";
	std::cin  >> y;

	result = 2 * (sin(pow(x, 2))) + 3 * cos(x*(y + 1));

	printf("Expression result: %.5f\n", result);

	system("pause");
    return 0;
}

