#pragma once

#pragma pack(1)

struct PACKAGE_HEADER
{
	char signature[8];	// 'P' 'A' 'C' 'K' 0x02 0x01 0x00 0x00
	unsigned long d1;	// 1
	unsigned long sum;	// �ļ�����
	FILETIME ft1;
	FILETIME ft2;
	char path[480];		// 'd' 'a' 't' 'a' '\' 0x00 ...

};

struct PACKAGE_LIST_HEADER 
{
	unsigned long sum;				// �ļ�����
	unsigned long list_header_size;	// �ļ�ͷ�б��С(�����˿հ�����)
	unsigned long blank_size;		// �ļ��б��������֮��Ŀհ������С 
	unsigned long data_section_size;		// ��������С
	char zero[16];

};

struct ITEM_NAME
{
	char len_or_type;
	union
	{
		// len_or_type == 0x05��ʱ��
		struct  
		{
			unsigned long len;
			char  sz_ansi_name2[1];
		};

		// ��ͨ����µ��ļ���
		char sz_ansi_name[1];
	};
};

struct ITEM_INFO
{
	unsigned long seed;
	unsigned long zero;
	unsigned long offset;
	unsigned long compress_size;
	unsigned long decompress_size;
	unsigned long is_compressed;
	FILETIME ft[5];
};

#pragma pack()