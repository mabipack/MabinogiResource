#pragma once
#include "iprogressmonitor.h"
class NullProgressMonitor : public IProgressMonitor
{
public:
	NullProgressMonitor(void);
	virtual ~NullProgressMonitor(void);

	// ��ʼһ����ҵ
	virtual void BeginWork(LPCTSTR lpszName, int totalWork );

	// ������ҵ����
	virtual void Worked(int work);

	// ������ҵ
	virtual void Done();

	// ���õ�ǰ��ҵ������
	virtual void SetTaskName(LPCTSTR name);

	// ���õ�ǰ��ҵ�ĸ���ҵ����
	virtual void SetSubTaskName(LPCTSTR lpszName);

	// ���ص�ǰ��ҵ�Ƿ�����ȡ����
	virtual bool IsCanceled();

	// ���õ�ǰ��ҵ�Ƿ�ȡ��
	virtual void SetCanceled(bool value);

private:
	bool m_bCanceled;
};

