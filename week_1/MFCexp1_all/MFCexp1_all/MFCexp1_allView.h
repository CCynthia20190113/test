
// MFCexp1_allView.h: CMFCexp1allView 类的接口
//

#pragma once


class CMFCexp1allView : public CView
{
protected: // 仅从序列化创建
	CMFCexp1allView() noexcept;
	DECLARE_DYNCREATE(CMFCexp1allView)

// 特性
public:
	CMFCexp1allDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexp1allView();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexp1_allView.cpp 中的调试版本
inline CMFCexp1allDoc* CMFCexp1allView::GetDocument() const
   { return reinterpret_cast<CMFCexp1allDoc*>(m_pDocument); }
#endif

