
// MFCexp2_2View.cpp: CMFCexp22View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexp2_2.h"
#endif

#include "MFCexp2_2Doc.h"
#include "MFCexp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexp22View

IMPLEMENT_DYNCREATE(CMFCexp22View, CView)

BEGIN_MESSAGE_MAP(CMFCexp22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexp22View 构造/析构

CMFCexp22View::CMFCexp22View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFCexp22View::~CMFCexp22View()
{
}

BOOL CMFCexp22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexp22View 绘图

void CMFCexp22View::OnDraw(CDC* /*pDC*/)
{
	CMFCexp22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCexp22View 诊断

#ifdef _DEBUG
void CMFCexp22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp22Doc* CMFCexp22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp22Doc)));
	return (CMFCexp22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexp22View 消息处理程序


void CMFCexp22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCexp22Doc* pDoc = GetDocument();
	int S;
	S= pDoc->A + pDoc->B;
	CString s;
	s.Format(_T("A+B=%d"), S);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
