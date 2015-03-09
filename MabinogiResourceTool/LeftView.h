
// LeftView.h : CLeftView ��Ľӿ�
//


#pragma once

#include <map>

using namespace std;

typedef map<HTREEITEM, CString> TreeKeyMap;
typedef map<CString, HTREEITEM> TreeNodeMap;

class CMabinogiResourceToolDoc;

class CLeftView : public CTreeView
{
protected: // �������л�����
	CLeftView();
	DECLARE_DYNCREATE(CLeftView)

// ����
public:
	CMabinogiResourceToolDoc* GetDocument();

// ����
public:

// ��д
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CLeftView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	TreeKeyMap m_keyMap;
	TreeNodeMap m_nodeMap;

	int m_iFolderCloseIcon;
	int m_iFolderOpenIcon;
// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
	virtual void OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/);
	HTREEITEM CreateTreeNode(HTREEITEM root, LPCTSTR path);
public:
	afx_msg void OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult);
};

#ifndef _DEBUG  // LeftView.cpp �еĵ��԰汾
inline CMabinogiResourceToolDoc* CLeftView::GetDocument()
   { return reinterpret_cast<CMabinogiResourceToolDoc*>(m_pDocument); }
#endif

