
// date0413T1View.cpp: Cdate0413T1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0413T1.h"
#endif

#include "date0413T1Doc.h"
#include "date0413T1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0413T1View

IMPLEMENT_DYNCREATE(Cdate0413T1View, CView)

BEGIN_MESSAGE_MAP(Cdate0413T1View, CView)
	ON_COMMAND(ID_RECT, &Cdate0413T1View::OnRect)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdate0413T1View 构造/析构

Cdate0413T1View::Cdate0413T1View() noexcept
{
	// TODO: 在此处添加构造代码
	x = 0;
	y = 0;

}

Cdate0413T1View::~Cdate0413T1View()
{
}

BOOL Cdate0413T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0413T1View 绘图

void Cdate0413T1View::OnDraw(CDC* pDC)
{
	Cdate0413T1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->r.left = pDoc->P2.x - 100;
	pDoc->r.top= pDoc->P2.y - 50;
	pDoc->r.right= pDoc->P2.x + 200;
	pDoc->r.bottom= pDoc->P2.y + 50;
	
	if (pDoc->flag)
		

		pDC->Rectangle(pDoc->r.left, pDoc->r.top, pDoc->r.right, pDoc->r.bottom);

	else
		pDC->Rectangle(pDoc->r);

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0413T1View 诊断

#ifdef _DEBUG
void Cdate0413T1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0413T1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0413T1Doc* Cdate0413T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0413T1Doc)));
	return (Cdate0413T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0413T1View 消息处理程序


void Cdate0413T1View::OnRect()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	Cdate0413T1Doc *pDc = GetDocument();

	
	
	
}




void Cdate0413T1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
	CClientDC dc(this);
	Cdate0413T1Doc *pDc = GetDocument();

	

	

	if (pDc->flag==true)
	{
		if (pDc->r.PtInRect(point))

		{
			pDc->P2 = point;

			Invalidate();

			
			
		}
		
	}
	



}


void Cdate0413T1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	Cdate0413T1Doc *pDc = GetDocument();

	pDc->flag = false;


	CView::OnLButtonUp(nFlags, point);
	
	


	

}


void Cdate0413T1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	Cdate0413T1Doc *pDc = GetDocument();
	pDc->flag = true;
	CView::OnLButtonDown(nFlags, point);

	
	
	

	



}
