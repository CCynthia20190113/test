
// date0324T3View.cpp: Cdate0324T3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0324T3.h"
#endif

#include "date0324T3Doc.h"
#include "date0324T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0324T3View

IMPLEMENT_DYNCREATE(Cdate0324T3View, CView)

BEGIN_MESSAGE_MAP(Cdate0324T3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_LINE, &Cdate0324T3View::OnLine)
	ON_COMMAND(ID_RECTANGLE, &Cdate0324T3View::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &Cdate0324T3View::OnEllipse)
END_MESSAGE_MAP()

// Cdate0324T3View 构造/析构

Cdate0324T3View::Cdate0324T3View() noexcept
{
	// TODO: 在此处添加构造代码
	

}

Cdate0324T3View::~Cdate0324T3View()
{
}

BOOL Cdate0324T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0324T3View 绘图

void Cdate0324T3View::OnDraw(CDC* /*pDC*/)
{
	Cdate0324T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0324T3View 诊断

#ifdef _DEBUG
void Cdate0324T3View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0324T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0324T3Doc* Cdate0324T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0324T3Doc)));
	return (Cdate0324T3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0324T3View 消息处理程序


void Cdate0324T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	Cdate0324T3Doc *pDoc = GetDocument();
	pDoc->P1 = point;

}


void Cdate0324T3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
	Cdate0324T3Doc *pDoc = GetDocument();
	pDoc->P2 = point;
	CClientDC dc(this);


	 if(set1)
	{
		dc.MoveTo(pDoc->P1);

		dc.LineTo(pDoc->P2);
		
	}
	else if (set2)
	{
		dc.Rectangle(pDoc->P1.x, pDoc->P1.y, pDoc->P2.x, pDoc->P2.y);
	}
	else if (set3)
	{
		dc.Ellipse(pDoc->P1.x, pDoc->P1.y, pDoc->P2.x, pDoc->P2.y);
	}
}


void Cdate0324T3View::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	
	set1 = true;
	set2 = false;
	set3 = false;

	
}


void Cdate0324T3View::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	set1 = false;
	set2 = true;
	set3 = false;
}


void Cdate0324T3View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	set1 = false;
	set3 = true;
	set2 = false;
}
