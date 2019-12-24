#pragma once
#include "OperationInterface.h"

class PlusOperation final : public OperationInterface {
public:
	PlusOperation() = default;
	virtual ~PlusOperation() = default;

	std::string	GetOperationType() const override;
	int Execute(double left, double right) const override;
};

class MinusOperation final : public OperationInterface {
public:
	MinusOperation() = default;
	virtual ~MinusOperation() = default;

	std::string	GetOperationType() const override;
	int Execute(double left, double right) const override;
};

class MultOperation final : public OperationInterface {
public:
	MultOperation() = default;
	virtual ~MultOperation() = default;

	std::string	GetOperationType() const override;
	int Execute(double left, double right) const override;
};

class DivOperation final : public OperationInterface {
public:
	DivOperation() = default;
	virtual ~DivOperation() = default;

	std::string	GetOperationType() const override;
	int Execute(double left, double right) const override;
};