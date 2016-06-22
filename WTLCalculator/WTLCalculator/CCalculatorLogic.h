#pragma once
#include <boost/optional.hpp>

class CCalculatorLogic
{
public:
	boost::optional<std::wstring> GetCurrentValue()const;

private:
	boost::optional<std::wstring> m_buffer;
	boost::optional<std::wstring> m_current;
};