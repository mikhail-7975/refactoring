//#include "..\Math_task_cpp\taskCreator.h"
#include "Operation.h"
#include "IInnerOperation.h"

double Operation::Execute(double left, const std::string& op, double right) const
{
	if (m_operations.count(op) == 0) return 0.;

	return m_operations.at(op)->Execute(left, right);
}

Operation* Operation::Instance()
{
	static std::unique_ptr<Operation> instance(new Operation);

	return instance.get();
}

void Operation::AddOperation(IInnerOperation* op)
{
	m_operations.emplace(op->GetOpType(), op);
}
