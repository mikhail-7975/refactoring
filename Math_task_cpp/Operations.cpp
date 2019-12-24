#include "Operations.h"
#include "operationInitializer.h"

std::string PlusOperation::GetOperationType() const
{
	return "+";
}

int PlusOperation::Execute(double left, double right) const
{
	return left + right;
}

std::string MinusOperation::GetOperationType() const
{
	return "-";
}

int MinusOperation::Execute(double left, double right) const
{
	return left - right;
}

std::string MultOperation::GetOperationType() const
{
	return "*";
}

int MultOperation::Execute(double left, double right) const
{
	return left * right;
}

std::string DivOperation::GetOperationType() const
{
	return "/";
}

int DivOperation::Execute(double left, double right) const
{
	return left / right;
}

