
// 第二周课堂实验3（0302）View.cpp: C第二周课堂实验30302View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第二周课堂实验3（0302）.h"
#endif

#include "第二周课堂实验3（0302）Doc.h"
#include "第二周课堂实验3（0302）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第二周课堂实验30302View

IMPLEMENT_DYNCREATE(C第二周课堂实验30302View, CView)

BEGIN_MESSAGE_MAP(C第二周课堂实验30302View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第二周课堂实验30302View 构造/析构

C第二周课堂实验30302View::C第二周课堂实验30302View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第二周课堂实验30302View::~C第二周课堂实验30302View()
{
}

BOOL C第二周课堂实验30302View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第二周课堂实验30302View 绘图

void C第二周课堂实验30302View::OnDraw(CDC* pDC)
{
	C第二周课堂实验30302Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CBrush brush, *oldbrush;
	brush.CreateSolidBrush(RGB(225, 225,.0));
	oldbrush = dc.SelectObject(&brush);
	dc.Ellipse(0, 0, 2 * r, 2 * r);
	dc.SelectObject(oldbrush);


	// TODO: 在此处为本机数据添加绘制代码
}


// C第二周课堂实验30302View 诊断

#ifdef _DEBUG
void C第二周课堂实验30302View::AssertValid() const
{
	CView::AssertValid();
}

void C第二周课堂实验30302View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第二周课堂实验30302Doc* C第二周课堂实验30302View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第二周课堂实验30302Doc)));
	return (C第二周课堂实验30302Doc*)m_pDocument;
}
#endif //_DEBUG


// C第二周课堂实验30302View 消息处理程序


void C第二周课堂实验30302View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	RECT rect;
	GetClientRect(&rect);
	
	if (x > y)   // 获得客户区宽度
		r = y / 2;
	else r = x / 2;


	CView::OnLButtonDown(nFlags, point);
}
void C第二周课堂实验30302View::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	x = (double)cx;
	y = (double)cy;

	// TODO: 在此处添加消息处理程序代码
}