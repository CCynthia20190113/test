
// MFCexp2View.cpp: CMFCexp2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexp2.h"
#endif

#include "MFCexp2Doc.h"
#include "MFCexp2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexp2View

IMPLEMENT_DYNCREATE(CMFCexp2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexp2View 构造/析构

CMFCexp2View::CMFCexp2View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFCexp2View::~CMFCexp2View()
{
}

BOOL CMFCexp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexp2View 绘图

void CMFCexp2View::OnDraw(CDC* pDC)
{
	CMFCexp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	if (nFlags);
	pDoc->count++;
	int b = pDoc->count;
	CString s;
	s.Format(_T("%d"), b);
	pDC->TextOutW(111, 111, s);


}


// CMFCexp2View 诊断

#ifdef _DEBUG
void CMFCexp2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp2Doc* CMFCexp2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp2Doc)));
	return (CMFCexp2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexp2View 消息处理程序


void CMFCexp2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
 

	
	CView::OnLButtonDown(nFlags, point);
}
