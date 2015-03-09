
// MabinogiResourceToolView.h : CMabinogiResourceToolView ��Ľӿ�
//

#pragma once


class CMabinogiResourceToolView : public CListView
{
protected: // �������л�����
	CMabinogiResourceToolView();
	DECLARE_DYNCREATE(CMabinogiResourceToolView)

// ����
public:
	CMabinogiResourceToolDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMabinogiResourceToolView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	bool m_bIsAscSort;
	int m_nLastSortColumnIndex;
// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
	virtual void OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/);
public:
	afx_msg void OnEditOpen();
	afx_msg void OnUpdateEditOpen(CCmdUI *pCmdUI);
	afx_msg void OnEditOpenas();
	afx_msg void OnUpdateEditOpenas(CCmdUI *pCmdUI);
	afx_msg void OnEditUncompress();
	afx_msg void OnUpdateEditUncompress(CCmdUI *pCmdUI);
	afx_msg void OnLvnColumnclick(NMHDR *pNMHDR, LRESULT *pResult);
};

#ifndef _DEBUG  // MabinogiResourceToolView.cpp �еĵ��԰汾
inline CMabinogiResourceToolDoc* CMabinogiResourceToolView::GetDocument() const
   { return reinterpret_cast<CMabinogiResourceToolDoc*>(m_pDocument); }
#endif

