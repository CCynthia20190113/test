
// date0331T3View.h: Cdate0331T3View 类的接口
//

#pragma once


class Cdate0331T3View : public CView
{
protected: // 仅从序列化创建
	Cdate0331T3View() noexcept;
	DECLARE_DYNCREATE(Cdate0331T3View)

// 特性
public:
	Cdate0331T3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0331T3View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // date0331T3View.cpp 中的调试版本
inline Cdate0331T3Doc* Cdate0331T3View::GetDocument() const
   { return reinterpret_cast<Cdate0331T3Doc*>(m_pDocument); }
#endif

