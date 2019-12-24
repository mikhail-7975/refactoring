#include "operationInitializer.h"

int Operation_::Execute(int leftNumber, const std::string & opSymbol, int rightNumber) const
{
	if (m_operations.count(opSymbol) == 0) return 0;
	
	return m_operations.at(opSymbol)->Execute(leftNumber, rightNumber);
}

const std::unique_ptr<Operation_>& Operation_::InitOperation()
{
	static std::unique_ptr<Operation_> instance(new Operation_); 

	return instance;
}

void Operation_::AddOperation(OperationInterface * op) {
	m_operations.emplace(op->GetOperationType(), op);
}
