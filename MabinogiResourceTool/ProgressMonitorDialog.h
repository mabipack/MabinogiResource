#pragma once


// CProgressMonitorDialog �Ի���

class CProgressMonitorDialog : public CDialog
{
	DECLARE_DYNAMIC(CProgressMonitorDialog)

public:
	CProgressMonitorDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CProgressMonitorDialog();

// �Ի�������
	enum { IDD = IDD_PROGRESSMONITORDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
