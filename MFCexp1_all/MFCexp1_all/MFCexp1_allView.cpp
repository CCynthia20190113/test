
// MFCexp1_allView.cpp: CMFCexp1allView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexp1_all.h"
#endif

#include "MFCexp1_allDoc.h"
#include "MFCexp1_allView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexp1allView

IMPLEMENT_DYNCREATE(CMFCexp1allView, CView)

BEGIN_MESSAGE_MAP(CMFCexp1allView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexp1allView 构造/析构

CMFCexp1allView::CMFCexp1allView() noexcept
{
	// TODO: 在此处添加构造代码


}

CMFCexp1allView::~CMFCexp1allView()
{
}

BOOL CMFCexp1allView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexp1allView 绘图

void CMFCexp1allView::OnDraw(CDC* pDC)
{
	CMFCexp1allDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	
	CString s=_T("我是刘红");
	pDC->TextOutW(200,200,s);
	CString b;
	int A=0;
	b.Format(_T("%d"),A);
	pDC->TextOutW(300,300,b);

	//第二题
	//pDoc->TextOutW(200,200,s);
	//pDoc->TextOutW(300,300,b);

}


// CMFCexp1allView 诊断

#ifdef _DEBUG
void CMFCexp1allView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp1allView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp1allDoc* CMFCexp1allView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp1allDoc)));
	return (CMFCexp1allDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexp1allView 消息处理程序


void CMFCexp1allView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC* dc = GetDC();
	CMFCexp1allDoc* pDoc = GetDocument();
	CView::OnLButtonDown(nFlags, point);
	dc->TextOutW(point.x, point.y, _T(""));
	pDoc->count++;
}



void CMFCexp1allView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCexp1allDoc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);

	CView::OnRButtonDown(nFlags, point);
}
