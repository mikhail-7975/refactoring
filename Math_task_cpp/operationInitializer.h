#pragma once

#include <unordered_map>
#include <memory>

#include "OperationInterface.h"
//class OperationInterface;

template <typename T>
struct OperationRegistrator;

class Operation_ {
public:
	~Operation_() = default;
	int Execute(int leftNumber, const std::string &opSymbol, int rightNumber) const;

	static const std::unique_ptr<Operation_>& InitOperation();
	void AddOperation(OperationInterface* op);

private:
	Operation_() = default;
	std::unordered_map<std::string, std::unique_ptr<OperationInterface>> m_operations;
};

template <typename T>
struct OpRegistretor {
	OpRegistretor() {
		Operation_::InitOperation()->AddOperation(new T);
	}
};

#define REGISTER_OPERATION(opName) static OpRegistretor<opName> registernewRegister##opName