
// MabinogiResourceTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMabinogiResourceTestApp:
// �йش����ʵ�֣������ MabinogiResourceTest.cpp
//

class CMabinogiResourceTestApp : public CWinAppEx
{
public:
	CMabinogiResourceTestApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMabinogiResourceTestApp theApp;