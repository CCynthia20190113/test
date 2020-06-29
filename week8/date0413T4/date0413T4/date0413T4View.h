
// date0413T4View.h: Cdate0413T4View 类的接口
//

#pragma once


class Cdate0413T4View : public CView
{
protected: // 仅从序列化创建
	Cdate0413T4View() noexcept;
	DECLARE_DYNCREATE(Cdate0413T4View)

// 特性
public:
	Cdate0413T4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0413T4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // date0413T4View.cpp 中的调试版本
inline Cdate0413T4Doc* Cdate0413T4View::GetDocument() const
   { return reinterpret_cast<Cdate0413T4Doc*>(m_pDocument); }
#endif

