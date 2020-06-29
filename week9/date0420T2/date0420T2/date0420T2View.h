
// date0420T2View.h: Cdate0420T2View 类的接口
//

#pragma once


class Cdate0420T2View : public CView
{
protected: // 仅从序列化创建
	Cdate0420T2View() noexcept;
	DECLARE_DYNCREATE(Cdate0420T2View)

// 特性
public:
	Cdate0420T2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0420T2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMove(int x, int y);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	int i;
	int j;
	int k;
	afx_msg void OnEllipse();
	afx_msg void OnCorlor();
};

#ifndef _DEBUG  // date0420T2View.cpp 中的调试版本
inline Cdate0420T2Doc* Cdate0420T2View::GetDocument() const
   { return reinterpret_cast<Cdate0420T2Doc*>(m_pDocument); }
#endif

