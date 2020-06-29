
// date0413T1View.h: Cdate0413T1View 类的接口
//

#pragma once


class Cdate0413T1View : public CView
{
protected: // 仅从序列化创建
	Cdate0413T1View() noexcept;
	DECLARE_DYNCREATE(Cdate0413T1View)

// 特性
public:
	Cdate0413T1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0413T1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRect();
	CRect r;
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	int x;
	int y;
};

#ifndef _DEBUG  // date0413T1View.cpp 中的调试版本
inline Cdate0413T1Doc* Cdate0413T1View::GetDocument() const
   { return reinterpret_cast<Cdate0413T1Doc*>(m_pDocument); }
#endif

