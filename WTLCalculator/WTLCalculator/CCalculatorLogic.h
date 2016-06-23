#pragma once
#include <string>

class CCalculatorLogic
{
	enum OperationType
	{
		plus = 0x041,
		minus,
		div,
		multiply,
		equally,
		clear,
		none
	};
public:
	std::wstring GetCurrentValue()const;
	void AppendNumber(std::wstring const &number);
	void AppendOperation(int operation);
private:
	static wchar_t OperationTypeToChar(OperationType const &opType);
	void CalculateExpression();
private:
	OperationType m_operationType = none;
	std::wstring m_left;
	std::wstring m_right;
};