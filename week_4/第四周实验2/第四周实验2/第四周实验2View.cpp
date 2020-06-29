
// 第四周实验2View.cpp: C第四周实验2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周实验2.h"
#endif

#include "第四周实验2Doc.h"
#include "第四周实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周实验2View

IMPLEMENT_DYNCREATE(C第四周实验2View, CView)

BEGIN_MESSAGE_MAP(C第四周实验2View, CView)
END_MESSAGE_MAP()

// C第四周实验2View 构造/析构

C第四周实验2View::C第四周实验2View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第四周实验2View::~C第四周实验2View()
{
}

BOOL C第四周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周实验2View 绘图

void C第四周实验2View::OnDraw(CDC* /*pDC*/)
{
	C第四周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周实验2View 诊断

#ifdef _DEBUG
void C第四周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周实验2Doc* C第四周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周实验2Doc)));
	return (C第四周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周实验2View 消息处理程序
void C第四周实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第四周实验2Doc *pDoc = GetDocument();

	CView::OnLButtonDown(nFlags, point);

	pDoc->P1 = point;
}


void C第四周实验2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第四周实验2Doc *pDoc = GetDocument();

	CView::OnLButtonUp(nFlags, point);


	pDoc->P2 = point;
	CString s;

	s.Format(_T("%d"), pDoc->count);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	int c = point.x - pDoc->P1.x;

	int b = c / pDoc->count;

	CString t;

	t.Format(_T("%d"), b);

	dc.TextOutW(300, 300, t);




}

void C第四周实验2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第四周实验2Doc *pDoc = GetDocument();
	pDoc->count++;

	CView::OnMouseMove(nFlags, point);
}
