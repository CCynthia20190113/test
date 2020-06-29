
// week7_1.h: week7_1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cweek71App:
// 有关此类的实现，请参阅 week7_1.cpp
//

class Cweek71App : public CWinApp
{
public:
	Cweek71App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek71App theApp;
