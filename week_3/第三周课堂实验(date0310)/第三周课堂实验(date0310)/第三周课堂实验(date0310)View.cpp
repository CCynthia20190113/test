
// 第三周课堂实验(date0310)View.cpp: C第三周课堂实验date0310View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周课堂实验(date0310).h"
#endif

#include "第三周课堂实验(date0310)Doc.h"
#include "第三周课堂实验(date0310)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周课堂实验date0310View

IMPLEMENT_DYNCREATE(C第三周课堂实验date0310View, CView)

BEGIN_MESSAGE_MAP(C第三周课堂实验date0310View, CView)
END_MESSAGE_MAP()

// C第三周课堂实验date0310View 构造/析构

C第三周课堂实验date0310View::C第三周课堂实验date0310View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第三周课堂实验date0310View::~C第三周课堂实验date0310View()
{
}

BOOL C第三周课堂实验date0310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周课堂实验date0310View 绘图

void C第三周课堂实验date0310View::OnDraw(CDC* /*pDC*/)
{
	C第三周课堂实验date0310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周课堂实验date0310View 诊断

#ifdef _DEBUG
void C第三周课堂实验date0310View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周课堂实验date0310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周课堂实验date0310Doc* C第三周课堂实验date0310View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周课堂实验date0310Doc)));
	return (C第三周课堂实验date0310Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周课堂实验date0310View 消息处理程序

//(1)
void C第三周课堂实验date0310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");
	CClientDC d(this);
	d.TextOutW(250, 250, s);
	CView::OnLButtonDown(nFlags, point);
}

void C第三周课堂实验date0310View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	CClientDC d(this);
	d.TextOutW(250, 250, s);


	CView::OnLButtonUp(nFlags, point);
}
