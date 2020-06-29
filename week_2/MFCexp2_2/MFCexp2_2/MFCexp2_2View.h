﻿
// MFCexp2_2View.h: CMFCexp22View 类的接口
//

#pragma once


class CMFCexp22View : public CView
{
protected: // 仅从序列化创建
	CMFCexp22View() noexcept;
	DECLARE_DYNCREATE(CMFCexp22View)

// 特性
public:
	CMFCexp22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexp22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexp2_2View.cpp 中的调试版本
inline CMFCexp22Doc* CMFCexp22View::GetDocument() const
   { return reinterpret_cast<CMFCexp22Doc*>(m_pDocument); }
#endif

