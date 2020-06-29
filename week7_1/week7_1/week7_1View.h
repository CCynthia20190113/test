
// week7_1View.h: Cweek71View 类的接口
//

#pragma once


class Cweek71View : public CView
{
protected: // 仅从序列化创建
	Cweek71View() noexcept;
	DECLARE_DYNCREATE(Cweek71View)

// 特性
public:
	Cweek71Doc* GetDocument() const;

// 操作
public:
	int show_hide;
	MyDlgo *pD = new MyDlgo;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void Onout();
	afx_msg void OnShuohide();
};

#ifndef _DEBUG  // week7_1View.cpp 中的调试版本
inline Cweek71Doc* Cweek71View::GetDocument() const
   { return reinterpret_cast<Cweek71Doc*>(m_pDocument); }
#endif

