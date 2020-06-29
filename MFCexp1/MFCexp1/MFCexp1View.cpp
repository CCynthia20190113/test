
// MFCexp1View.cpp: CMFCexp1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexp1.h"
#endif

#include "MFCexp1Doc.h"
#include "MFCexp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexp1View

IMPLEMENT_DYNCREATE(CMFCexp1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexp1View 构造/析构

CMFCexp1View::CMFCexp1View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFCexp1View::~CMFCexp1View()
{
}

BOOL CMFCexp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexp1View 绘图

void CMFCexp1View::OnDraw(CDC* pDC)
{
	CMFCexp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s = pDoc->stu;
	pDC->TextOutW(200,200,s);
	CString b;
	int A=0;
	b.Format(_T("%d"),A);
	pDC->TextOutW(200,200,b);

}


// CMFCexp1View 诊断

#ifdef _DEBUG
void CMFCexp1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp1Doc* CMFCexp1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp1Doc)));
	return (CMFCexp1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexp1View 消息处理程序


void CMFCexp1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC* pDC;
	CMFCexp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = pDoc->stu;
	pDC->TextOutW(point.x, point.y, s);

	CView::OnLButtonDown(nFlags, point);
}
