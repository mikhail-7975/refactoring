#pragma once
#include <string>
#include "operationInitializer.h"

struct Task {
	Task() = default;
	Task(int _firstNumber, int _secondNumber, const std::string & _operationSymbol);
	int firstNumber, secondNumber, result;
	std::string operationSymbol;
	std::string show();
};