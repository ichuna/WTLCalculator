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
		if (m_right.empty())
		{
			m_left.clear();
		}
		else
		{
			m_right.clear();
		}
		return;
	}
	if (m_operationType == none && !m_right.empty())
	{
		m_left = m_right;
		m_right.clear();
		m_operationType = static_cast<OperationType>(operation);
	}
	else if (!m_left.empty() && m_operationType == none)
	{
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

float CCalculatorLogic::CalculateExpression()
{
	double temp;
	switch (m_operationType)
	{
	case minus:
		temp = _wtof(m_left.c_str()) - _wtof(m_right.c_str());
		break;
	case plus:
		temp = _wtof(m_left.c_str()) + _wtof(m_right.c_str());
		break;
	case multiply:
		temp = _wtof(m_left.c_str()) + _wtof(m_right.c_str());
		break;
	case div:
		temp = _wtof(m_left.c_str()) + _wtof(m_right.c_str());
		break;
	}

	m_left = std::to_wstring(temp);
	m_right.clear();
	return 0;
}
