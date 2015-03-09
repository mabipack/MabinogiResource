
// MabinogiResourceToolDoc.h : CMabinogiResourceToolDoc ��Ľӿ�
//


#pragma once

#include <map>
#include <vector>
#include <memory>
using namespace std;
using namespace std::tr1;

#include "../MabinogiResource/IResourceSet.h"
#pragma comment(lib, "MabinogiResource")


class ResourceHandle
{
public:
	ResourceHandle(IResource * pRes)
	{
		name = pRes->GetName();
		int lastSep = name.ReverseFind('\\');
		if (lastSep >= 0)
		{
			path = name.Mid(0, lastSep);
			name = name.Mid(lastSep + 1);
			
		}
		pResource = pRes;
	}

	CString name;
	CString path;
	IResource * pResource;

};
typedef multimap<CString, shared_ptr<ResourceHandle> > ResourceContainerMap;
typedef pair<CString, shared_ptr<ResourceHandle> > ResourceContainerPair;

class CMabinogiResourceToolDoc : public CDocument
{
protected: // �������л�����
	CMabinogiResourceToolDoc();
	DECLARE_DYNCREATE(CMabinogiResourceToolDoc)

// ����
public:
	CString m_strDir;
	ResourceContainerMap m_resContainerMap;
// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMabinogiResourceToolDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	IResourceSet * m_pResourceSet;


// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	virtual void DeleteContents();
	void IndexResources(void);
};
