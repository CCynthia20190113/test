
// 第三周实验3View.h: C第三周实验3View 类的接口
//

#pragma once


class C第三周实验3View : public CView
{
protected: // 仅从序列化创建
	C第三周实验3View() noexcept;
	DECLARE_DYNCREATE(C第三周实验3View)

// 特性
public:
	C第三周实验3Doc* GetDocument() const;

	C第三周实验3Doc * OnLButtonUp(UINT nFlags, CPoint point);

	C第三周实验3Doc * OnLButtonDown(UINT nFlags, CPoint point);

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第三周实验3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
public:
	//afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	CPoint p;
private:
	CPoint m_ptOrigin;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 第三周实验3View.cpp 中的调试版本
inline C第三周实验3Doc* C第三周实验3View::GetDocument() const
   { return reinterpret_cast<C第三周实验3Doc*>(m_pDocument); }
#endif

