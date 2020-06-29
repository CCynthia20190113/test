
// MFCexp2_1View.cpp: CMFCexp21View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexp2_1.h"
#endif

#include "MFCexp2_1Doc.h"
#include "MFCexp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexp21View

IMPLEMENT_DYNCREATE(CMFCexp21View, CView)

BEGIN_MESSAGE_MAP(CMFCexp21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCexp21View 构造/析构

CMFCexp21View::CMFCexp21View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFCexp21View::~CMFCexp21View()
{
}

BOOL CMFCexp21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexp21View 绘图

void CMFCexp21View::OnDraw(CDC* pDC)
{
	CMFCexp21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

}


// CMFCexp21View 诊断

#ifdef _DEBUG
void CMFCexp21View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp21Doc* CMFCexp21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp21Doc)));
	return (CMFCexp21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexp21View 消息处理程序


void CMFCexp21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");
	CClientDC d(this);
	d.TextOutW(250, 250, s);


	CView::OnLButtonDown(nFlags, point);
}


void CMFCexp21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	CClientDC d(this);
	d.TextOutW(250, 250, s);

	CView::OnLButtonUp(nFlags, point);
}
