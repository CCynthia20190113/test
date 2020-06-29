
// 第五周实验2.h: 第五周实验2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// C第五周实验2App:
// 有关此类的实现，请参阅 第五周实验2.cpp
//

class C第五周实验2App : public CWinApp
{
public:
	C第五周实验2App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第五周实验2App theApp;
