
// 第二周课堂实验1View.cpp: C第二周课堂实验1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第二周课堂实验1.h"
#endif

#include "第二周课堂实验1Doc.h"
#include "第二周课堂实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CPoint point;
// C第二周课堂实验1View

IMPLEMENT_DYNCREATE(C第二周课堂实验1View, CView)

BEGIN_MESSAGE_MAP(C第二周课堂实验1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第二周课堂实验1View 构造/析构

C第二周课堂实验1View::C第二周课堂实验1View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第二周课堂实验1View::~C第二周课堂实验1View()
{
}

BOOL C第二周课堂实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第二周课堂实验1View 绘图

void C第二周课堂实验1View::OnDraw(CDC* pDC)
{
	C第二周课堂实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CBrush brush, *oldbrush;
	brush.CreateSolidBrush(RGB(0xD1, 0xFB, 0xED));
	oldbrush = dc.SelectObject(&brush);
	dc.Ellipse(0, 0, 2 * pDoc->r, 2 * pDoc->r);
	dc.SelectObject(oldbrush);

	 //TODO: 在此处为本机数据添加绘制代码
}


// C第二周课堂实验1View 诊断

#ifdef _DEBUG
void C第二周课堂实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第二周课堂实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第二周课堂实验1Doc* C第二周课堂实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第二周课堂实验1Doc)));
	return (C第二周课堂实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第二周课堂实验1View 消息处理程序


void C第二周课堂实验1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnLButtonDblClk(nFlags, point);
	C第二周课堂实验1Doc* pDoc = GetDocument();
	CRect rect;
	GetCursorPos(&point);
	CClientDC dc(this);
	int a = (point.x - rect.left);
	int b = (point.y - rect.top);
	this->point.x = point.x;
	this->point.y = point.y;
	
		int c= (b - a) + a;
		pDoc->r = rand() % c;
		// TODO: 在此添加控件通知处理程序代码
		CString str;
		
	
	CView::OnLButtonDblClk(nFlags, point);
}


double C第二周课堂实验1View::GetNum()
{
	// TODO: 在此处添加实现代码.
	UpdateData(); 
	UpdateData(FALSE); 
	return 0.0;

}
