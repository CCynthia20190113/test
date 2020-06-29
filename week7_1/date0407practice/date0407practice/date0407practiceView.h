
// date0407practiceView.h: Cdate0407practiceView 类的接口
//

#pragma once


class Cdate0407practiceView : public CView
{
protected: // 仅从序列化创建
	Cdate0407practiceView() noexcept;
	DECLARE_DYNCREATE(Cdate0407practiceView)

// 特性
public:
	Cdate0407practiceDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0407practiceView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDlg();
};

#ifndef _DEBUG  // date0407practiceView.cpp 中的调试版本
inline Cdate0407practiceDoc* Cdate0407practiceView::GetDocument() const
   { return reinterpret_cast<Cdate0407practiceDoc*>(m_pDocument); }
#endif

