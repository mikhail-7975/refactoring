#pragma once
#include <string>

class IInnerOperation {
public:
	IInnerOperation() = default;
	virtual ~IInnerOperation() = default;

	virtual double Execute(double left, double right) const = 0;
	virtual std::string	GetOpType() const = 0;
};
