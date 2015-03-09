#pragma once
#include "iresourceset.h"

#include <memory>
#include <vector>
#include <string>

using namespace std;
using namespace std::tr1;

class CPackResourceSet : public IResourceSet
{
public:
	friend class CResourceFileSystem;

	CPackResourceSet();

	virtual ~CPackResourceSet(void);

	bool Open(LPCTSTR lpszPackFile);


	// �ҵ�ָ��ȫ������Դ
	virtual int FindResourceIndex(LPCTSTR lpszName);

	// ���һ����Դ
	virtual IResource * GetResource(size_t index);

	// �����Դ����
	virtual size_t GetResourceCount();

	virtual void Release();
protected:
	vector<shared_ptr<IResource>> m_Resources;
};
