
// date0331T2View.cpp: Cdate0331T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0331T2.h"
#endif

#include "date0331T2Doc.h"
#include "date0331T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0331T2View

IMPLEMENT_DYNCREATE(Cdate0331T2View, CView)

BEGIN_MESSAGE_MAP(Cdate0331T2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cdate0331T2View 构造/析构

Cdate0331T2View::Cdate0331T2View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0331T2View::~Cdate0331T2View()
{
}

BOOL Cdate0331T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0331T2View 绘图

void Cdate0331T2View::OnDraw(CDC* /*pDC*/)
{
	Cdate0331T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0331T2View 诊断

#ifdef _DEBUG
void Cdate0331T2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0331T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0331T2Doc* Cdate0331T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0331T2Doc)));
	return (Cdate0331T2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0331T2View 消息处理程序


void Cdate0331T2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	Cdate0331T2Doc *pDoc = GetDocument();

	
	
		pDoc->P1 = point;
	
	

	CView::OnLButtonDown(nFlags, point);
}


void Cdate0331T2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0331T2Doc *pDoc = GetDocument();
	pDoc->P2 = point;

	
		CClientDC dc(this);

		dc.Rectangle(pDoc->P1.x, pDoc->P1.y, point.x, point.y);

	
	
	
	CView::OnLButtonUp(nFlags, point);
}


void Cdate0331T2View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Cdate0331T2Doc *pDoc = GetDocument();

	CString s;
	s += (wchar_t)nChar;

	
	

	if (pDoc->f)
	{
		dc.TextOutW(pDoc->P1.x + pDoc->a, pDoc->P1.y + 10, s);
		int y = pDoc->P1.y + 10;
	}
	else
	{
		dc.TextOutW(pDoc->P3.x , pDoc->P3.y, s);
	}

	pDoc->a = pDoc->a+ 30;
	
	

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Cdate0331T2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	Cdate0331T2Doc *pDoc = GetDocument();
	pDoc->f = false;
	pDoc->P3 = point;

	CView::OnLButtonDblClk(nFlags, point);
}
