// WTLCalculatorView.h : interface of the CWTLCalculatorView class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

class CWTLCalculatorView : public CDialogImpl<CWTLCalculatorView>
{
public:
	enum { IDD = IDD_WTLCALCULATOR_FORM };

	BOOL PreTranslateMessage(MSG* pMsg);

	BEGIN_MSG_MAP(CWTLCalculatorView)
	END_MSG_MAP()

// Handler prototypes (uncomment arguments if needed):
//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)
};
