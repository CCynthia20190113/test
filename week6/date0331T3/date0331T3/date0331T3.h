
// date0331T3.h: date0331T3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cdate0331T3App:
// 有关此类的实现，请参阅 date0331T3.cpp
//

class Cdate0331T3App : public CWinApp
{
public:
	Cdate0331T3App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0331T3App theApp;
