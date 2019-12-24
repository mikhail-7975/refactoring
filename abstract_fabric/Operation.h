
//------------------------------------------------------------------------------
// Operation.h
//
// Operation implements...
//
// Copyright (c) 2019 GlenSand
// All rights reserved.
//
// Date: dd.mm.2019
// Author: Bezborodov Gleb
//------------------------------------------------------------------------------
#pragma once

#include <unordered_map>
#include <memory>

class IInnerOperation;

template <typename T>
struct OpRegistrator;

class Operation {
public:
	~Operation() = default;
	double Execute(double left, const std::string &op, double right) const;

	static Operation* Instance();
	void AddOperation(IInnerOperation* op);
	
private:
	Operation() = default;
	std::unordered_map<std::string, std::unique_ptr<IInnerOperation>> m_operations;
};

template <typename T>
struct OpRegistretor {
	OpRegistretor() {
		Operation::Instance()->AddOperation(new T);
	}
};

#define REGISTER_OPERATION(opName) static OpRegistretor<opName> registernewRegister##opName