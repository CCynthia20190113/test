
// date0324T3View.h: Cdate0324T3View 类的接口
//

#pragma once


class Cdate0324T3View : public CView
{
protected: // 仅从序列化创建
	Cdate0324T3View() noexcept;
	DECLARE_DYNCREATE(Cdate0324T3View)

// 特性
public:
	Cdate0324T3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0324T3View();
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
	afx_msg void OnLine();
	bool set1;
	bool set2;
	bool set3;
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // date0324T3View.cpp 中的调试版本
inline Cdate0324T3Doc* Cdate0324T3View::GetDocument() const
   { return reinterpret_cast<Cdate0324T3Doc*>(m_pDocument); }
#endif

