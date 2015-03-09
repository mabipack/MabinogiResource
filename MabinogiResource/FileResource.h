#pragma once
#include "iresource.h"

#include "tstring.h"
#include "Win32File.h"

using namespace std;

class CFileResource : public IResource
{
public:
	// ��һ���ļ�����IResource����
	CFileResource(LPCTSTR lpszFile, LPCTSTR lpszResourceName, size_t version);

	virtual ~CFileResource(void);

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
	CWin32File m_file;
	tstring m_name;
	size_t m_compressedSize;
	size_t m_decompressedSize;
	size_t m_version;
	FILETIME m_ftCreation;
	FILETIME m_ftLastAccess;
	FILETIME m_ftLastWrite;
};
