
// date0407practice02View.h: Cdate0407practice02View 类的接口
//

#pragma once


class Cdate0407practice02View : public CView
{
protected: // 仅从序列化创建
	Cdate0407practice02View() noexcept;
	DECLARE_DYNCREATE(Cdate0407practice02View)

// 特性
public:
	Cdate0407practice02Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0407practice02View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDlg();
};

#ifndef _DEBUG  // date0407practice02View.cpp 中的调试版本
inline Cdate0407practice02Doc* Cdate0407practice02View::GetDocument() const
   { return reinterpret_cast<Cdate0407practice02Doc*>(m_pDocument); }
#endif

