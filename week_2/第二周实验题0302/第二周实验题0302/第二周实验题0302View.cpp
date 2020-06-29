
// 第二周实验题0302View.cpp: C第二周实验题0302View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第二周实验题0302.h"
#endif

#include "第二周实验题0302Doc.h"
#include "第二周实验题0302View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第二周实验题0302View

IMPLEMENT_DYNCREATE(C第二周实验题0302View, CView)

BEGIN_MESSAGE_MAP(C第二周实验题0302View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// C第二周实验题0302View 构造/析构

C第二周实验题0302View::C第二周实验题0302View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第二周实验题0302View::~C第二周实验题0302View()
{
}

BOOL C第二周实验题0302View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第二周实验题0302View 绘图

void C第二周实验题0302View::OnDraw(CDC* pDC)
{
	C第二周实验题0302Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//1.
	/*CString S;
	CString a;
	int A=2020;
	S = _T("我是鱼头星星");
	 a.Format(_T("%d"), A);
	 pDC->TextOutW(250, 250, S);
	 pDC->TextOutW(400, 250, a);*/

	//2
	//pDC->TextOutW(250, 250, pDoc->S);
	//pDC->TextOutW(400, 250, pDoc->a);

	//3


	// TODO: 在此处为本机数据添加绘制代码
}


// C第二周实验题0302View 诊断

#ifdef _DEBUG
void C第二周实验题0302View::AssertValid() const
{
	CView::AssertValid();
}

void C第二周实验题0302View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第二周实验题0302Doc* C第二周实验题0302View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第二周实验题0302Doc)));
	return (C第二周实验题0302Doc*)m_pDocument;
}
#endif //_DEBUG


// C第二周实验题0302View 消息处理程序


void C第二周实验题0302View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC* dc = GetDC();
	CView::OnLButtonDown(nFlags, point);
	C第二周实验题0302Doc* pDoc = GetDocument();
	if (dc->TextOutW(point.x, point.y, _T(""))) {
		
		pDoc->count++;
	}
}


void C第二周实验题0302View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第二周实验题0302Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(250, 250, s);
	CView::OnRButtonDown(nFlags, point);
}
