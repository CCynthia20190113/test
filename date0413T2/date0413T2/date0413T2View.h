
// date0413T2View.h: Cdate0413T2View 类的接口
//

#pragma once


class Cdate0413T2View : public CView
{
protected: // 仅从序列化创建
	Cdate0413T2View() noexcept;
	DECLARE_DYNCREATE(Cdate0413T2View)

// 特性
public:
	Cdate0413T2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0413T2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPlus();
};

#ifndef _DEBUG  // date0413T2View.cpp 中的调试版本
inline Cdate0413T2Doc* Cdate0413T2View::GetDocument() const
   { return reinterpret_cast<Cdate0413T2Doc*>(m_pDocument); }
#endif

