#pragma once

#include "ExportMacro.h"

class MABINOGIRESOURCE_API IProgressMonitor
{
public:

	IProgressMonitor(void)
	{
	}

	virtual ~IProgressMonitor(void)
	{
	}


	// ��ʼһ����ҵ
	virtual void BeginWork(LPCTSTR lpszName, int totalWork ) = 0;

	// ������ҵ����
	virtual void Worked(int work) = 0;

	// ������ҵ
	virtual void Done() = 0;

	// ���õ�ǰ��ҵ������
	virtual void SetTaskName(LPCTSTR name) = 0;

	// ���õ�ǰ��ҵ�ĸ���ҵ����
	virtual void SetSubTaskName(LPCTSTR lpszName) = 0;

	// ���ص�ǰ��ҵ�Ƿ�����ȡ����
	virtual bool IsCanceled() = 0;

	// ���õ�ǰ��ҵ�Ƿ�ȡ��
	virtual void SetCanceled(bool value) = 0;

private:
	IProgressMonitor(IProgressMonitor const & other);
	IProgressMonitor& operator=(IProgressMonitor const & other);
};
