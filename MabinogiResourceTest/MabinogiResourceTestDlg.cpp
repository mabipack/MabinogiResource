
// MabinogiResourceTestDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MabinogiResourceTest.h"
#include "MabinogiResourceTestDlg.h"

#include "../MabinogiResource/IResourceSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMabinogiResourceTestDlg �Ի���




CMabinogiResourceTestDlg::CMabinogiResourceTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMabinogiResourceTestDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMabinogiResourceTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMabinogiResourceTestDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CMabinogiResourceTestDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMabinogiResourceTestDlg ��Ϣ�������

BOOL CMabinogiResourceTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMabinogiResourceTestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMabinogiResourceTestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMabinogiResourceTestDlg::OnBnClickedButton1()
{
	IResource * pRes = IResource::CreateResourceFromFile(TEXT("C:\\setup.log"), TEXT("setup.log"), 40);
	IResourceSet::PackResources(&pRes, 1, 50, TEXT("C:\\test.pack"), NULL);
	pRes->Release();
	//PACK_RESOURCE_HANDLE hRes = CreateResourceFromFile(L"E:\\_Mabinogi\\ant.bmp", "ant.bmp", 50);
	//PackResources(&hRes, 1, 88, L"E:\\_Mabinogi\\88.pack");

	//CloseResource(hRes);
}
