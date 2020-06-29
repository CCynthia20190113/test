
// 第4周课堂实验View.cpp: C第4周课堂实验View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第4周课堂实验.h"
#endif

#include "第4周课堂实验Doc.h"
#include "第4周课堂实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第4周课堂实验View

IMPLEMENT_DYNCREATE(C第4周课堂实验View, CView)

BEGIN_MESSAGE_MAP(C第4周课堂实验View, CView)
END_MESSAGE_MAP()

// C第4周课堂实验View 构造/析构

C第4周课堂实验View::C第4周课堂实验View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第4周课堂实验View::~C第4周课堂实验View()
{
}

BOOL C第4周课堂实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第4周课堂实验View 绘图

void C第4周课堂实验View::OnDraw(CDC* /*pDC*/)
{
	C第4周课堂实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第4周课堂实验View 诊断

#ifdef _DEBUG
void C第4周课堂实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第4周课堂实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第4周课堂实验Doc* C第4周课堂实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第4周课堂实验Doc)));
	return (C第4周课堂实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第4周课堂实验View 消息处理程序
void C第4周课堂实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第4周课堂实验Doc* pDoc = GetDocument();
	pDoc->P1 = point;

	CView::OnLButtonDown(nFlags, point);
}



void C第4周课堂实验View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第4周课堂实验Doc* pDoc = GetDocument();
	pDoc->P2 = point;
	CClientDC dc(this);
	dc.Rectangle(CRect(pDoc->P1, point));

	CView::OnLButtonUp(nFlags, point);
}


void C第4周课堂实验View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString str;
	str.Format(point.x, point.y);
	dc.TextOutW(300, 300, str);



	CView::OnMouseMove(nFlags, point);
}

