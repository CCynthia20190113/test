
// 第三周课堂实验（date0310_T2View.cpp: C第三周课堂实验date0310T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周课堂实验（date0310_T2.h"
#endif

#include "第三周课堂实验（date0310_T2Doc.h"
#include "第三周课堂实验（date0310_T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周课堂实验date0310T2View

IMPLEMENT_DYNCREATE(C第三周课堂实验date0310T2View, CView)

BEGIN_MESSAGE_MAP(C第三周课堂实验date0310T2View, CView)
END_MESSAGE_MAP()

// C第三周课堂实验date0310T2View 构造/析构

C第三周课堂实验date0310T2View::C第三周课堂实验date0310T2View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第三周课堂实验date0310T2View::~C第三周课堂实验date0310T2View()
{
}

BOOL C第三周课堂实验date0310T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周课堂实验date0310T2View 绘图

void C第三周课堂实验date0310T2View::OnDraw(CDC* /*pDC*/)
{
	C第三周课堂实验date0310T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周课堂实验date0310T2View 诊断

#ifdef _DEBUG
void C第三周课堂实验date0310T2View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周课堂实验date0310T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周课堂实验date0310T2Doc* C第三周课堂实验date0310T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周课堂实验date0310T2Doc)));
	return (C第三周课堂实验date0310T2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周课堂实验date0310T2View 消息处理程序

void C第三周课堂实验date0310T2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int C;
	C第三周课堂实验date0310T2Doc* pDoc = GetDocument();
	C = pDoc->A + pDoc->B;
	CString s;
	s.Format(_T("A+B=%d"), C);
	CClientDC dc(this);
	dc.TextOutW(250, 250, s);
	CView::OnLButtonDown(nFlags, point);
}
