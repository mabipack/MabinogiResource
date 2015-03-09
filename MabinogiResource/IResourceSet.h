#pragma once

#include "ExportMacro.h"
#include "IResource.h"
#include "IProgressMonitor.h"

class MABINOGIRESOURCE_API IResourceSet : public IObject
{
public:

	IResourceSet(void){}

	virtual ~IResourceSet(void){}

	// �ҵ�ָ��ȫ������Դ
	virtual int FindResourceIndex(LPCTSTR lpszName) = 0;

	// ���һ����Դ
	virtual IResource * GetResource(size_t index) = 0;

	// �����Դ����
	virtual size_t GetResourceCount() = 0;

	static bool PackResources( IResource ** resources, size_t size, size_t version, LPCTSTR lpszPackFile, IProgressMonitor * pMonitor);

	static IResourceSet * CreateResourceSetFromFolder(LPCTSTR lpszPackFolder);

	static IResourceSet * CreateResourceSetFromFile(LPCTSTR lpszFile);
}; 
