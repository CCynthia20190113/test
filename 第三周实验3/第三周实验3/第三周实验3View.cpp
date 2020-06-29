
// 第三周实验3View.cpp: C第三周实验3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周实验3.h"
#endif

#include "第三周实验3Doc.h"
#include "第三周实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周实验3View

IMPLEMENT_DYNCREATE(C第三周实验3View, CView)

BEGIN_MESSAGE_MAP(C第三周实验3View, CView)
END_MESSAGE_MAP()

// C第三周实验3View 构造/析构

C第三周实验3View::C第三周实验3View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第三周实验3View::~C第三周实验3View()
{
}

BOOL C第三周实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周实验3View 绘图

void C第三周实验3View::OnDraw(CDC* pDC)
{
	C第三周实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect r1(15, 25, 150, 300);
	CRect r2(800, 100, 950, 400);
	CRect r3(700, 700, 900, 950);
	pDC->Rectangle(&r1);
	pDC->Rectangle(&r2);
	pDC->Rectangle(&r3);



	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周实验3View 诊断

#ifdef _DEBUG
void C第三周实验3View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周实验3Doc* C第三周实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周实验3Doc)));
	return (C第三周实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周实验3View 消息处理程序

C第三周实验3Doc* C第三周实验3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	return 0;

	CView::OnLButtonUp(nFlags, point);
}


C第三周实验3Doc* C第三周实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	CString t;
	CString r;

	C第三周实验3Doc *pDoc = GetDocument();
	if ((point.x > pDoc->r1.TopLeft().x) && (point.x < pDoc->r1.BottomRight().x) && (point.y > pDoc->r1.TopLeft().y) && (point.y < pDoc->r1.BottomRight().y))
	{
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);

	}
	else if (point.x > pDoc->r2.TopLeft().x&&point.x< pDoc->r2.BottomRight().x&&point.y>pDoc->r2.TopLeft().y&&point.y < pDoc->r2.BottomRight().y)
	{
		t.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, t);
	}
	else if (point.x > pDoc->r3.TopLeft().x&&point.x< pDoc->r3.BottomRight().x&&point.y>pDoc->r3.TopLeft().y&&point.y < pDoc->r3.BottomRight().y)
	{
		int c = pDoc->a + pDoc->b;
		r.Format(_T("%d"), c);
		dc.TextOutW(point.x, point.y, r);
	}
	else dc.TextOutW(point.x, point.y, _T("点击无效"));

	CView::OnLButtonDown(nFlags, point);
	return 0;
}
