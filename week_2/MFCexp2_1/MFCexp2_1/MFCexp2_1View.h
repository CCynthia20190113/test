
// MFCexp2_1View.h: CMFCexp21View 类的接口
//

#pragma once


class CMFCexp21View : public CView
{
protected: // 仅从序列化创建
	CMFCexp21View() noexcept;
	DECLARE_DYNCREATE(CMFCexp21View)

// 特性
public:
	CMFCexp21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexp21View();
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
	void 
		OnSize(UINT nType, int cx, int cy);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexp2_1View.cpp 中的调试版本
inline CMFCexp21Doc* CMFCexp21View::GetDocument() const
   { return reinterpret_cast<CMFCexp21Doc*>(m_pDocument); }
#endif

