#pragma once
#include "resource.h"
#include <vector>


class CButtonsCanvas
	: public CDialogImpl<CButtonsCanvas>
{
public:

	enum { IDD = IDD_BUTTONS_CANVAS };

	BOOL PreTranslateMessage(MSG* pMsg);

	BEGIN_MSG_MAP(CWTLCalculatorView)
		MESSAGE_HANDLER(WM_INITDIALOG, OnCreate)
	END_MSG_MAP()

	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);

private:
	std::vector<CButton> m_buttons;
};