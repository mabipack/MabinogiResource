================================================================================
MICROSOFT �������: MabinogiResourceTool ��Ŀ����
===============================================================================

Ӧ�ó�������Ϊ����������� MabinogiResourceTool Ӧ�ó��򡣴�Ӧ�ó��򲻽���ʾ Microsoft ������Ļ���ʹ�÷�����������Ϊ����дӦ�ó������㡣

���ļ���Ҫ������� MabinogiResourceTool Ӧ�ó����ÿ���ļ������ݡ�

MabinogiResourceTool.vcxproj
����ʹ��Ӧ�ó��������ɵ� VC++ ��Ŀ������Ŀ�ļ��� 
���������ɸ��ļ��� Visual C++ �İ汾��Ϣ���Լ��й�ʹ��Ӧ�ó�����ѡ���ƽ̨�����ú���Ŀ���ܵ���Ϣ��

MabinogiResourceTool.vcxproj.filters
    ����ʹ�á�Ӧ�ó����򵼡����ɵ� VC++ ��Ŀɸѡ���ļ���
    �������й���Ŀ�ļ���ɸѡ��֮��Ĺ�����Ϣ���� IDE �У�ͨ�����ֹ��������ض��ڵ����Է�����ʽ��ʾ����������չ�����ļ������磬��.cpp���ļ��롰Դ�ļ���ɸѡ��������

MabinogiResourceTool.h
����Ӧ�ó������Ҫͷ�ļ���������������Ŀ�ض���ͷ�ļ�(���� Resource.h)�������� CMabinogiResourceToolApp Ӧ�ó����ࡣ

MabinogiResourceTool.cpp
���ǰ���Ӧ�ó����� CMabinogiResourceToolApp ����ҪӦ�ó���Դ�ļ���

MabinogiResourceTool.rc
���ǳ���ʹ�õ����� Microsoft Windows ��Դ���б������� RES ��Ŀ¼�д洢��ͼ�ꡢλͼ�͹�ꡣ���ļ�����ֱ���� Microsoft Visual C++ �н��б༭����Ŀ��Դλ�� 2052 �С�

res\MabinogiResourceTool.ico
��������Ӧ�ó���ͼ���ͼ���ļ�����ͼ���������Ҫ��Դ�ļ� MabinogiResourceTool.rc �С�

res\MabinogiResourceTool.rc2
���ļ��������� Microsoft Visual C++ �н��б༭����Դ����Ӧ�ý���������Դ�༭���༭��������Դ���ڴ��ļ��С�

MabinogiResourceTool.reg
����һ��ʾ�� .reg �ļ�������ʾ�˿�ܽ�Ϊ�����õ�ע�����õ����ࡣ���Խ�������
��������Ӧ�ó���һ��ʹ�õ� .reg �ļ����������Խ���ɾ����������Ĭ�ϵ� RegisterShellFileTypes ע�ᡣ


/////////////////////////////////////////////////////////////////////////////

��������ܴ���:
Windows ��Դ��������ʽ: ��Ŀ������ Windows ��Դ��������ʽ�Ľ��棬����������ܡ�

MainFrm.h, MainFrm.cpp
��Щ�ļ���������� CMainFrame������������
CMDIFrameWnd ���������� MDI ��ܹ��ܡ�

LeftView.h, LeftView.cpp
��Щ�ļ����������� CLeftView������������
CTreeView��

/////////////////////////////////////////////////////////////////////////////

�����ӿ�ܴ���:

ChildFrm.h��ChildFrm.cpp
��Щ�ļ����岢ʵ�� CChildFrame �࣬����֧�� MDI Ӧ�ó����е��Ӵ��ڡ�

/////////////////////////////////////////////////////////////////////////////

Ӧ�ó����򵼴���һ���ĵ����ͺ�һ����ͼ:

MabinogiResourceToolDoc.h��MabinogiResourceToolDoc.cpp - �ĵ�
��Щ�ļ����� CMabinogiResourceToolDoc �ࡣ�༭��Щ�ļ�������������ĵ����ݲ���ʵ���ļ�����ͼ���(ͨ�� CMabinogiResourceToolDoc::Serialize)��
�ĵ������������ַ���:
�ļ���չ��:      pack
�ļ����� ID:        MabinogiResourceTool.Document
����ܱ���:  MabinogiResourceTool
�ĵ���������:       MabinogiResourc
ɸѡ����:         Mabinogi Package Files (*.pack)
�ļ����¼��: MabinogiResourc
�ļ�����ȫ��: MabinogiResourceTool.Document

MabinogiResourceToolView.h��MabinogiResourceToolView.cpp - �ĵ�����ͼ
��Щ�ļ����� CMabinogiResourceToolView �ࡣ
CMabinogiResourceToolView �������ڲ鿴 CMabinogiResourceToolDoc ����

res\MabinogiResourceToolDoc.ico
����ͼ���ļ��������� CMabinogiResourceToolDoc ��� MDI �Ӵ��ڵ�ͼ�ꡣ��ͼ���������Ҫ��Դ�ļ� MabinogiResourceTool.rc �С�




/////////////////////////////////////////////////////////////////////////////

��������:

��ִ���
Ӧ�ó�������ΪӦ�ó����ĵ�����˲�ִ���֧�֡�

/////////////////////////////////////////////////////////////////////////////

������׼�ļ�:

StdAfx.h��StdAfx.cpp
��Щ�ļ�����������Ϊ MabinogiResourceTool.pch ��Ԥ����ͷ (PCH) �ļ�����Ϊ StdAfx.obj ��Ԥ���������ļ���

Resource.h
���Ǳ�׼ͷ�ļ����������µ���Դ ID��
Microsoft Visual C++ ��ȡ�����´��ļ���

MabinogiResourceTool.manifest
	Ӧ�ó����嵥�ļ��� Windows XP ��������Ӧ�ó���
	���ض��汾���г��򼯵������ԡ����س���ʹ�ô�
	��Ϣ�ӳ��򼯻�������ʵ��ĳ��򼯻�
	��Ӧ�ó������˽����Ϣ��Ӧ�ó����嵥����Ϊ�����·ַ�����Ϊ
	��Ӧ�ó����ִ���ļ���װ����ͬ�ļ����е��ⲿ .manifest �ļ�������
	Ҳ��������Դ����ʽ�����ڸÿ�ִ���ļ��С� 
/////////////////////////////////////////////////////////////////////////////

����ע��:

Ӧ�ó�����ʹ�á�TODO:��ָʾӦ��ӻ��Զ����Դ���벿�֡�

���Ӧ�ó����ڹ���� DLL ��ʹ�� MFC������Ҫ���·�����Щ MFC DLL�����Ӧ�ó������õ����������ϵͳ�ĵ�ǰ�������ò�ͬ������Ҫ���·�����Ӧ�ı��ػ���Դ MFC100XXX.DLL���й�����������ĸ�����Ϣ����μ� MSDN �ĵ����й� Redistributing Visual C++ applications (���·��� Visual C++ Ӧ�ó���)���½ڡ�

/////////////////////////////////////////////////////////////////////////////
