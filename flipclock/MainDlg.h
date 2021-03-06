// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once
#include "SettingDlg.h"
class CMainDlg : public SHostDialog
{
public:
	CMainDlg();
	~CMainDlg();
protected:
	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();

	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	void OnMouseMove(UINT nFlags, CPoint point);
	
protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_MAP_END()
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_MOUSEMOVE(OnMouseMove)
		CHAIN_MSG_MAP(SHostDialog)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			m_bLayoutInited;
	SShellNotifyIcon shellNotifyIcon;
	CSettingDlg     m_DlgSetting;
	CPoint m_pt;
};
