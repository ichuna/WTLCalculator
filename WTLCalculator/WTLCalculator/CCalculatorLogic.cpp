#include "stdafx.h"
#include "CCalculatorLogic.h"

boost::optional<std::wstring> CCalculatorLogic::GetCurrentValue()const
{
	return m_current;
}
