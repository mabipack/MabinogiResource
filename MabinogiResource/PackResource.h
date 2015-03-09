#pragma once
#include "iresource.h"

#include "tstring.h"
#include <memory>
using namespace std;
using namespace std::tr1;

#include "types.h"

class CWin32File;
class CPackResource : public IResource
{
public:
	CPackResource(tstring name, shared_ptr<CWin32File> spFile, ITEM_INFO * pInfo);

	virtual ~CPackResource(void);

	// ��ǰʵ���ȫ����Ϊ���·������ db/ss.xml
	virtual LPCTSTR GetName() ;

	// ���ؽ�ѹ�����ݣ�ÿ�η����µ�����
	virtual size_t GetDecompressedContent(char * pBuffer, size_t size) ;

	// ���ؽ�ѹǰ���ݣ�ÿ�η����µ�����
	virtual size_t GetCompressedContent(char * pBuffer, size_t size) ;

	// ����ѹ�����С
	virtual size_t GetCompressedSize() ;

	// ����ѹ��ǰ�Ĵ�С
	virtual size_t GetDecompressedSize() ;

	// ���ذ汾������Խ�󣬰汾Խ��
	virtual size_t GetVersion() ;

	// ���ش���ʱ��
	virtual FILETIME GetCreationTime() ;

	// ����������ʱ��
	virtual FILETIME GetLastAccessTime() ;

	// �������д��ʱ��
	virtual FILETIME GetLastWriteTime() ;

	virtual void Release();
protected:
	tstring m_name;
	shared_ptr<CWin32File> m_spFile;
	ITEM_INFO m_info;
};
