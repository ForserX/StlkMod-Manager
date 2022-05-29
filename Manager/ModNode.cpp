#include "pch.h"
#include "ModNode.h"


BEGIN_MESSAGE_MAP(ModNode, CStatic)
	ON_WM_SIZE()
	ON_WM_CREATE()
END_MESSAGE_MAP()

int ModNode::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	CStatic::OnCreate(lpCreateStruct);

	CRect RectDummy;
	GetClientRect(RectDummy);

	mImage.Create(L"", SS_BITMAP | WS_CHILD | WS_VISIBLE | WS_DISABLED, RectDummy, this);
	mName.Create(L"", WS_CHILD | WS_VISIBLE | WS_DISABLED, RectDummy, this);
	return 0;
}

void ModNode::OnSize(UINT nType, int cx, int cy)
{
	CStatic::OnSize(nType, cx, cy);

	CRect RectDummy;
	GetClientRect(RectDummy);

	mImage.SetWindowPos(nullptr, 10, 5, RectDummy.right - 10, RectDummy.bottom - 30, SWP_NOACTIVATE | SWP_NOZORDER);
	mName.SetWindowPos(nullptr, 10, RectDummy.bottom - 30, RectDummy.right - 10, RectDummy.bottom - 5, SWP_NOACTIVATE | SWP_NOZORDER);
}
