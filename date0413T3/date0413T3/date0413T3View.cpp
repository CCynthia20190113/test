
// date0413T3View.cpp: Cdate0413T3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0413T3.h"
#endif

#include "date0413T3Doc.h"
#include "date0413T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0413T3View

IMPLEMENT_DYNCREATE(Cdate0413T3View, CView)

BEGIN_MESSAGE_MAP(Cdate0413T3View, CView)
	ON_WM_TIMER()
	ON_WM_SIZE()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdate0413T3View 构造/析构

Cdate0413T3View::Cdate0413T3View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0413T3View::~Cdate0413T3View()
{
}

BOOL Cdate0413T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0413T3View 绘图

void Cdate0413T3View::OnDraw(CDC* pDC)
{
	Cdate0413T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	if (pDoc->set)
	{
		SetTimer(0, 500, NULL);
		
	}


	pDC->Ellipse(pDoc->cr);

	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0413T3View 诊断

#ifdef _DEBUG
void Cdate0413T3View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0413T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0413T3Doc* Cdate0413T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0413T3Doc)));
	return (Cdate0413T3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0413T3View 消息处理程序


void Cdate0413T3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	Cdate0413T3Doc *pDoc = GetDocument();

	
		if (pDoc->set&&pDoc->x1 < pDoc->cx)
		{
			pDoc->cr.left += 50;
			pDoc->cr.right += 50;
			Invalidate();
			if (pDoc->cr.right > pDoc->cx)
				pDoc->x1 = pDoc->x2;
		}
		else if (pDoc->set&&pDoc->x1 >= pDoc->cx)
		{
			{
				pDoc->cr.left -= 50;
				pDoc->cr.right -= 50;
				Invalidate();
				if (pDoc->cr.left < 0)
					pDoc->x1 = 100;
			}
		}
	

	CView::OnTimer(nIDEvent);


}


void Cdate0413T3View::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	Cdate0413T3Doc *pDoc = GetDocument();
	// TODO: 在此处添加消息处理程序代码
	pDoc->cx = cx;
	pDoc->x2 = cx;

	pDoc->cr.top = cy/2-50;
	pDoc->cr.left = cx/2-50;
	pDoc->cr.bottom = cy / 2 +50;
	pDoc->cr.right = cx / 2 + 50;
}


void Cdate0413T3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0413T3Doc *pDoc = GetDocument();
	pDoc->set = false;

	CView::OnLButtonDblClk(nFlags, point);
}


void Cdate0413T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0413T3Doc *pDoc = GetDocument();
	pDoc->set = true;


	
}
