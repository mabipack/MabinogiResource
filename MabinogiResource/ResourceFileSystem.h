#pragma once

#include "IResourceSet.h"

#include <memory>
#include <vector>

using namespace std;
using namespace std::tr1;

class CResourceFileSystem : public IResourceSet
{
public:
	CResourceFileSystem(void);

	virtual ~CResourceFileSystem(void);

	// ��һ��pack�ļ��д���
	bool Open(LPCTSTR lpszPackFolder);

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
