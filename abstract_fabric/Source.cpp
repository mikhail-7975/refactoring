#include "Operation.h"
#include <iostream>

int main()
{
	// тут замеры времени вставь
	const auto res = Operation::Instance()->Execute(1, "+", 1);

	std::cout << res << std::endl;
	return 0;
}