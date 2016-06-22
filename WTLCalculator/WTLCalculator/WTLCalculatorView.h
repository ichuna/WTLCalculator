// WTLCalculatorView.h : interface of the CWTLCalculatorView class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once
#include "ButtonsCanvas.h"
#include "CCalculatorLogic.h"
#include <map>

class CWTLCalculatorView : public CDialogImpl<CWTLCalculatorView>
{
public:
	CWTLCalculatorView();

	enum { IDD = IDD_WTLCALCULATOR_FORM };

	BOOL PreTranslateMessage(MSG* pMsg);

	BEGIN_MSG_MAP(CWTLCalculatorView)
		MESSAGE_HANDLER(WM_INITDIALOG, OnCreate)
		/*COMMAND_ID_HANDLER(ID_0_BUTTON, OnButton)*/
		COMMAND_RANGE_HANDLER(ID_0_BUTTON, ID_9_BUTTON, OnInsertNumber);
		COMMAND_RANGE_HANDLER(ID_PLUS_BUTTON, ID_CLEAR_BUTTON, OnInsertOperation);
	END_MSG_MAP()

//  Handler prototypes (uncomment arguments if needed):
//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)
	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);

private:
	void CreateButton(CRect rect, const char * buttonName, UINT id);
	LRESULT OnInsertNumber(UINT /*uMsg*/, WPARAM /*wParam*/, HWND /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnInsertOperation(UINT /*uMsg*/, WPARAM /*wParam*/, HWND /*lParam*/, BOOL& /*bHandled*/);
private:
	CEdit m_calcDisplay;
	CCalculatorLogic m_calcLogic;
};
