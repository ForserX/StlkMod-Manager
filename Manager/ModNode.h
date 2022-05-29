#pragma once
#include <afxwin.h>

class ModNode :
    public CStatic
{
    DECLARE_MESSAGE_MAP()
    CStatic mImage;
    CStatic mName;

public:
    ModNode() = default;
    ~ModNode() = default;

public:
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnSize(UINT nType, int cx, int cy);
};

