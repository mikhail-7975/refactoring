#include "InnerOperations.h"
#include "Operation.h"

std::string Summ::GetOpType() const
{
	return "+";
}

double Summ::Execute(double left, double right) const
{
	return left + right;
}

std::string Div::GetOpType() const
{
	return "/";
}

double Div::Execute(double left, double right) const
{
	return left / right;
}

std::string Diff::GetOpType() const
{
	return "-";
}

double Diff::Execute(double left, double right) const
{
	return left - right;
}

std::string Mult::GetOpType() const
{
	return "*";
}

double Mult::Execute(double left, double right) const
{
	return left * right;
}

REGISTER_OPERATION(Mult);
REGISTER_OPERATION(Div);
REGISTER_OPERATION(Summ);
REGISTER_OPERATION(Diff);