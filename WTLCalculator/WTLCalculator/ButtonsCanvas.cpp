#include "stdafx.h"
#include "ButtonsCanvas.h"

BOOL CButtonsCanvas::PreTranslateMessage(MSG * pMsg)
{
	return 0;
}

LRESULT CButtonsCanvas::OnCreate(UINT, WPARAM, LPARAM, BOOL &)
{
	m_buttons;
	CButton button;
	button.Create(this->m_hWnd, CRect(110, 110, 200, 130), _T("1"), WS_CHILD |
		WS_VISIBLE, WS_EX_CLIENTEDGE);
	//m_buttons.push_back(button);


	return 0;
}
