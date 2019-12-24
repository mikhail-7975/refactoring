//------------------------------------------------------------------------------
//
// Copyright (c) 2019 GlenSand
// All rights reserved.
//
// Date: 23.12.2019
// Author: Bezborodov Gleb
//------------------------------------------------------------------------------
#pragma once

#include  "IInnerOperation.h"

class Summ final: public IInnerOperation {
public:
	
	Summ() = default;
	virtual ~Summ() = default;

	std::string	GetOpType() const override;
	double Execute(double left, double right) const override;
};

class Div final : public IInnerOperation {
public:

	Div() = default;
	virtual ~Div() = default;

	std::string	GetOpType() const override; //{ return "+"; } 
	double Execute(double left, double right) const override;
};

class Diff final : public IInnerOperation {
public:

	Diff() = default;
	virtual ~Diff() = default;

	std::string	GetOpType() const override;
	double	Execute(double left, double right) const override;
};

class Mult final : public IInnerOperation {
public:

	Mult() = default;
	virtual ~Mult() = default;

	std::string	GetOpType() const override;
	double	Execute(double left, double right) const override;
};

