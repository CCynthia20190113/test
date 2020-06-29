
// MFCexp2View.h: CMFCexp2View 类的接口
//

#pragma once


class CMFCexp2View : public CView
{
protected: // 仅从序列化创建
	CMFCexp2View() noexcept;
	DECLARE_DYNCREATE(CMFCexp2View)

// 特性
public:
	CMFCexp2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexp2View();
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

#ifndef _DEBUG  // MFCexp2View.cpp 中的调试版本
inline CMFCexp2Doc* CMFCexp2View::GetDocument() const
   { return reinterpret_cast<CMFCexp2Doc*>(m_pDocument); }
#endif

