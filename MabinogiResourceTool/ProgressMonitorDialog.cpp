// ProgressMonitorDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MabinogiResourceTool.h"
#include "ProgressMonitorDialog.h"
#include "afxdialogex.h"


// CProgressMonitorDialog �Ի���

IMPLEMENT_DYNAMIC(CProgressMonitorDialog, CDialog)

CProgressMonitorDialog::CProgressMonitorDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CProgressMonitorDialog::IDD, pParent)
{

}

CProgressMonitorDialog::~CProgressMonitorDialog()
{
}

void CProgressMonitorDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CProgressMonitorDialog, CDialog)
END_MESSAGE_MAP()


// CProgressMonitorDialog ��Ϣ�������
