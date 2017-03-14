//stamp:0e94d85079c6f128
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_SETTINGWND = _T("LAYOUT:XML_SETTINGWND");
				PAGE_SETTINGS = _T("LAYOUT:PAGE_SETTINGS");
				PAGE_ITEM = _T("LAYOUT:PAGE_ITEM");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_SETTINGWND;
			const TCHAR * PAGE_SETTINGS;
			const TCHAR * PAGE_ITEM;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				png_mode = _T("IMG:png_mode");
				png_picture = _T("IMG:png_picture");
				png_bkgnd = _T("IMG:png_bkgnd");
				png_shadow = _T("IMG:png_shadow");
			}
			const TCHAR * png_mode;
			const TCHAR * png_picture;
			const TCHAR * png_bkgnd;
			const TCHAR * png_shadow;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _SMENU{
			public:
			_SMENU(){
				menu_tray = _T("SMENU:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENU;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"btn_close",65539},
		{L"btn_min",65540},
		{L"btn_setting",65550},
		{L"btn_setting_cancel",65548},
		{L"btn_setting_ok",65549},
		{L"btn_test_net_set",136},
		{L"net_cfg_addr_edt",137},
		{L"net_cfg_field_edt",65545},
		{L"net_cfg_port_edt",65544},
		{L"net_cfg_pswd_edt",65543},
		{L"net_cfg_type_cmb",65541},
		{L"net_cfg_user_edt",65542},
		{L"serv_cfg_addr_edt",65546},
		{L"serv_cfg_port_edt",65547},
		{L"set_form",65538},
		{L"tab_main",65536},
		{L"turn3dview",65537}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			btn_close = namedXmlID[0].strName;
			btn_min = namedXmlID[1].strName;
			btn_setting = namedXmlID[2].strName;
			btn_setting_cancel = namedXmlID[3].strName;
			btn_setting_ok = namedXmlID[4].strName;
			btn_test_net_set = namedXmlID[5].strName;
			net_cfg_addr_edt = namedXmlID[6].strName;
			net_cfg_field_edt = namedXmlID[7].strName;
			net_cfg_port_edt = namedXmlID[8].strName;
			net_cfg_pswd_edt = namedXmlID[9].strName;
			net_cfg_type_cmb = namedXmlID[10].strName;
			net_cfg_user_edt = namedXmlID[11].strName;
			serv_cfg_addr_edt = namedXmlID[12].strName;
			serv_cfg_port_edt = namedXmlID[13].strName;
			set_form = namedXmlID[14].strName;
			tab_main = namedXmlID[15].strName;
			turn3dview = namedXmlID[16].strName;
		}
		 const wchar_t * btn_close;
		 const wchar_t * btn_min;
		 const wchar_t * btn_setting;
		 const wchar_t * btn_setting_cancel;
		 const wchar_t * btn_setting_ok;
		 const wchar_t * btn_test_net_set;
		 const wchar_t * net_cfg_addr_edt;
		 const wchar_t * net_cfg_field_edt;
		 const wchar_t * net_cfg_port_edt;
		 const wchar_t * net_cfg_pswd_edt;
		 const wchar_t * net_cfg_type_cmb;
		 const wchar_t * net_cfg_user_edt;
		 const wchar_t * serv_cfg_addr_edt;
		 const wchar_t * serv_cfg_port_edt;
		 const wchar_t * set_form;
		 const wchar_t * tab_main;
		 const wchar_t * turn3dview;
		}name;

		class _id{
		public:
		const static int btn_close	=	65539;
		const static int btn_min	=	65540;
		const static int btn_setting	=	65550;
		const static int btn_setting_cancel	=	65548;
		const static int btn_setting_ok	=	65549;
		const static int btn_test_net_set	=	136;
		const static int net_cfg_addr_edt	=	137;
		const static int net_cfg_field_edt	=	65545;
		const static int net_cfg_port_edt	=	65544;
		const static int net_cfg_pswd_edt	=	65543;
		const static int net_cfg_type_cmb	=	65541;
		const static int net_cfg_user_edt	=	65542;
		const static int serv_cfg_addr_edt	=	65546;
		const static int serv_cfg_port_edt	=	65547;
		const static int set_form	=	65538;
		const static int tab_main	=	65536;
		const static int turn3dview	=	65537;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
