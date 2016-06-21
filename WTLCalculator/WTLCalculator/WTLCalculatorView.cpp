// WTLCalculatorView.cpp : implementation of the CWTLCalculatorView class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "resource.h"

#include "WTLCalculatorView.h"

BOOL CWTLCalculatorView::PreTranslateMessage(MSG* pMsg)
{
	return CWindow::IsDialogMessage(pMsg);
}
