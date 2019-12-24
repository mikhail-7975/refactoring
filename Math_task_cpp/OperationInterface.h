#pragma once
#include <string>

class OperationInterface {
public:
	OperationInterface() = default;
	virtual ~OperationInterface() = default;

	virtual int Execute(double left, double right) const = 0;
	virtual std::string	GetOperationType() const = 0;
};