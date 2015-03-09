
// MabinogiResourceToolDoc.cpp : CMabinogiResourceToolDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MabinogiResourceTool.h"
#endif

#include "MabinogiResourceToolDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMabinogiResourceToolDoc

IMPLEMENT_DYNCREATE(CMabinogiResourceToolDoc, CDocument)

BEGIN_MESSAGE_MAP(CMabinogiResourceToolDoc, CDocument)
END_MESSAGE_MAP()


// CMabinogiResourceToolDoc ����/����

CMabinogiResourceToolDoc::CMabinogiResourceToolDoc()
{
	m_pResourceSet = NULL;
}

CMabinogiResourceToolDoc::~CMabinogiResourceToolDoc()
{
}

BOOL CMabinogiResourceToolDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;


	return TRUE;
}




// CMabinogiResourceToolDoc ���л�

void CMabinogiResourceToolDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		m_pResourceSet = IResourceSet::CreateResourceSetFromFile(ar.GetFile()->GetFilePath());
		IndexResources();
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMabinogiResourceToolDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMabinogiResourceToolDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:  strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMabinogiResourceToolDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMabinogiResourceToolDoc ���

#ifdef _DEBUG
void CMabinogiResourceToolDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMabinogiResourceToolDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMabinogiResourceToolDoc ����
void CMabinogiResourceToolDoc::DeleteContents()
{
	if (m_pResourceSet != NULL)
	{
		m_pResourceSet->Release();
		m_pResourceSet = NULL;
	}
	CDocument::DeleteContents();
}

void CMabinogiResourceToolDoc::IndexResources(void)
{
	m_resContainerMap.clear();
	for (size_t i = 0;i < m_pResourceSet->GetResourceCount(); i++)
	{
		auto hRes = shared_ptr<ResourceHandle>(new ResourceHandle(m_pResourceSet->GetResource(i)));
		m_resContainerMap.insert(ResourceContainerPair(hRes->path, hRes));
	}
}
