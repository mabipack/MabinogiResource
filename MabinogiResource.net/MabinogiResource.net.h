// MabinogiResource.net.h

#pragma once
#include <Windows.h>
#include "../MabinogiResource/MabinogiResource.h"
#include <vector>
using namespace std;
using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;

namespace MabinogiResource 
{

	public ref class PackResource
	{
	public:
		//��ȡ�ļ�������
		String^	GetName()		{return m_Name;}
		//��ȡ�ļ��Ĵ�С
		size_t	GetSize()		{return m_Size;}
		//��ȡ�ļ�������
		bool	GetData(array<Byte>^ buffer);
		//�ر��ļ�����
		void	Close();
	private:
		PACK_RESOURCE_HANDLE	m_Handle;
		String^					m_Name;
		size_t					m_Size;
	public:
		PackResource(PACK_RESOURCE_HANDLE handle);
		~PackResource();
	};

	// �ļ�����
	public ref class PackResourceSet
	{
	public:
		//��ȡ��Դ�����ļ�������
		size_t		GetFileCount()		{return m_FileCount;}
		//��ȡָ���������ļ�
		PackResource^	GetFileByIndex(size_t index);
		//��ȡָ�����Ƶ��ļ�
		PackResource^	GetFileByName(String^ name);
		//�ر���Դ��
		void		Close();
		//��������
		~PackResourceSet();
	private:
		PACK_RESOURCE_SET_HANDLE	m_Handle;
		size_t		m_FileCount;
	private:
		PackResourceSet(PACK_RESOURCE_SET_HANDLE handle);
	public:
		//��pack�ļ�������Դ��
		static PackResourceSet^	CreateFromFile(String^ fileName);
		//��pack�ļ��д�����Դ��
		static PackResourceSet^	CreateFromFolder(String^ fileName);
	};

	// �ļ����ϴ�����
	public ref class PackResourceSetCreater
	{
	public:
		//���һ��Ҫ������ļ����������ļ���pack���е����ƣ��ļ���Ӳ���ϵ�ԭʼ·��
		bool	AddFile(String^ fileName,String^ filePath);
		//���,������Ҫ���ɵ�pack�ļ��İ汾�����ɵ�pack�ļ��ı����ַ
		bool	CreatePack(size_t version,String^ filePath);
	private:
		vector<PACK_RESOURCE_HANDLE>*	m_List;
		size_t	m_Version;
	public:
		PackResourceSetCreater(size_t version);
		~PackResourceSetCreater();
	};
}
