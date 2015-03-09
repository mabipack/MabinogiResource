#pragma once

#include "ExportMacro.h"

#ifdef __cplusplus
extern "C" {
#endif

struct PACK_RESOURCE_SET {};
struct PACK_RESOURCE {};

typedef PACK_RESOURCE_SET* PACK_RESOURCE_SET_HANDLE;
typedef PACK_RESOURCE* PACK_RESOURCE_HANDLE;

#define PROGRESS_MONITOR_BEGIN_TASK			0
#define PROGRESS_MONITOR_WORKED				1
#define PROGRESS_MONITOR_DONE				2
#define PROGRESS_MONITOR_SET_TASK_NAME		3
#define PROGRESS_MONITOR_SET_SUB_TASK_NAME	4

struct ProgressMonitorData 
{
	int type;
	union
	{
		struct _BeginTask 
		{
			LPCTSTR lpszTaskName;
			int totalWork;
		} beginTask;
		struct _Worked
		{
			int work;
		} worked;
		struct _Done 
		{
	
		} done;

		struct _SetTaskName
		{
			LPCTSTR lpszName;
		} setTaskName;

		struct _SetSubTaskName
		{
			LPCTSTR lpszName;
		} setSubTaskName;
	} content;
	DWORD dwParamter;
};
// ��ѹ��package�ļ���ʱ��Ļص�����
// ����false���жϱ���ѹ��
typedef bool (*ProgressMonitorProc)(ProgressMonitorData * pData);

//////////////////////////////////////////////////////////////////////////
// ������Դ���͹ر���Դ���Ĳ���
MABINOGIRESOURCE_API PACK_RESOURCE_SET_HANDLE CreateResourceSetFromFolder(LPCTSTR lpszFolder);
MABINOGIRESOURCE_API PACK_RESOURCE_SET_HANDLE CreateResourceSetFromFile(LPCTSTR lpszFile);
MABINOGIRESOURCE_API void CloseResourceSet(PACK_RESOURCE_SET_HANDLE hResourceSet);
//////////////////////////////////////////////////////////////////////////

// ��һ���ļ�������Դ
MABINOGIRESOURCE_API PACK_RESOURCE_HANDLE CreateResourceFromFile(LPCTSTR lpszFile, LPCTSTR lpszResourceName, size_t version);

// �ͷ�һ����Դ������
MABINOGIRESOURCE_API void CloseResource(PACK_RESOURCE_HANDLE hResource);

//////////////////////////////////////////////////////////////////////////
// �ҵ�ָ��ȫ������Դ
MABINOGIRESOURCE_API int ResourceSet_FindResourceIndex(PACK_RESOURCE_SET_HANDLE hResourceSet, LPCTSTR lpszName);

// ���һ����Դ
MABINOGIRESOURCE_API PACK_RESOURCE_HANDLE ResourceSet_GetResource(PACK_RESOURCE_SET_HANDLE hResourceSet, size_t index);

// �����Դ����
MABINOGIRESOURCE_API size_t ResourceSet_GetResourceCount(PACK_RESOURCE_SET_HANDLE hResourceSet);
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// ��ǰʵ���ȫ����Ϊ���·������ db/ss.xml
MABINOGIRESOURCE_API int Resource_GetResourceName(PACK_RESOURCE_HANDLE hResource, LPTSTR lpszBuffer, int nBuffer);

// ȫ���ĳ���
MABINOGIRESOURCE_API int Resource_GetResourceNameLength(PACK_RESOURCE_HANDLE hResource);

// ���ؽ�ѹ������
MABINOGIRESOURCE_API size_t Resource_GetDecompressedContent(PACK_RESOURCE_HANDLE hResource, void* lpBuffer, size_t size);

// ���ؽ�ѹǰ����
MABINOGIRESOURCE_API size_t Resource_GetCompressedContent(PACK_RESOURCE_HANDLE hResource, void* lpBuffer, size_t size);

// ����ѹ�����С
MABINOGIRESOURCE_API size_t Resource_GetCompressedSize(PACK_RESOURCE_HANDLE hResource);

// ����ѹ��ǰ�Ĵ�С
MABINOGIRESOURCE_API size_t Resource_GetDecompressedSize(PACK_RESOURCE_HANDLE hResource);

// ���ذ汾������Խ�󣬰汾Խ��
MABINOGIRESOURCE_API size_t Resource_GetVersion(PACK_RESOURCE_HANDLE hResource);

// ���ش���ʱ��
MABINOGIRESOURCE_API FILETIME Resource_GetCreationTime(PACK_RESOURCE_HANDLE hResource);

// ����������ʱ��
MABINOGIRESOURCE_API FILETIME Resource_GetLastAccessTime(PACK_RESOURCE_HANDLE hResource);

// �������д��ʱ��
MABINOGIRESOURCE_API FILETIME Resource_GetLastWriteTime(PACK_RESOURCE_HANDLE hResource);	
//////////////////////////////////////////////////////////////////////////

// ����Ϊһ��pack�ļ�
MABINOGIRESOURCE_API void PackResources(PACK_RESOURCE_HANDLE * hResourceArray, size_t length, size_t version, LPCTSTR lpszPackFile, ProgressMonitorProc proc, DWORD dwParameter);

#ifdef __cplusplus
}
#endif

