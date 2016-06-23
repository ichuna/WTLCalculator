#include "stdafx.h"
#include "CCalculatorLogic.h"

std::wstring CCalculatorLogic::GetCurrentValue()const
{
	if (m_left.empty() && m_right.empty())
	{
		return L"0";
	}
	return (m_left + OperationTypeToChar(m_operationType) + m_right);
}

void CCalculatorLogic::AppendNumber(std::wstring const &number)
{
	m_right += number;
}

void CCalculatorLogic::AppendOperation(int operation)
{
	if (operation == clear)
	{
		m_right.empty() ? m_left.clear() : m_right.clear();
		return;
	}
	if (m_operationType == none)
	{
		if (!m_right.empty())
		{
			m_left = m_right;
			m_right.clear();
		}
		m_operationType = static_cast<OperationType>(operation);
	}
	else
	{
		CalculateExpression();
		m_operationType = none;
	}
}

wchar_t CCalculatorLogic::OperationTypeToChar(OperationType const & opType)
{
	switch (opType)
	{
	case plus:
		return '+';
	case minus:
		return '-';
	case div:
		return '/';
	case multiply:
		return '*';
	}
	return '\r';
}

void CCalculatorLogic::CalculateExpression()
{
	int temp;
	switch (m_operationType)
	{
	case minus:
		temp = _wtoi(m_left.c_str()) - _wtoi(m_right.c_str());
		break;
	case plus:
		temp = _wtoi(m_left.c_str()) + _wtoi(m_right.c_str());
		break;
	case multiply:
		temp = _wtoi(m_left.c_str()) * _wtoi(m_right.c_str());
		break;
	case div:
		temp = _wtoi(m_left.c_str()) / _wtoi(m_right.c_str());
		break;
	}

	m_left = std::to_wstring(temp);
	m_right.clear();
}
