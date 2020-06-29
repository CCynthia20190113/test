
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


// C第二周课堂实验1View

IMPLEMENT_DYNCREATE(C第二周课堂实验1View, CView)

BEGIN_MESSAGE_MAP(C第二周课堂实验1View, CView)
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
	CRect rect;
	GetClientRect(&rect);
	CPen NewPen;
	CPen pOldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, 0, 255));
	CBrush NewCBrush, *pOldCBrush;
	NewCBrush.CreateSolidBrush(RGB(0, 255, 0));
	pOldCBrush = pDC->SelectObject(&NewCBrush);
	pDC->Ellipse(rect.left, rect.top, rect.right, rect.bottom);
	pDC->SelectObject(pOldCBrush);
	NewCBrush.DeleteObject();
	pDC->SelectObject(pOldPen);
	NewPen.DeleteObject();


	//CWnd* pWnd = GetDlgItem(IDB_BUT_RECOGNIZE);

	//pWnd->GetClientRect(&rect);
	// TODO: 在此处为本机数据添加绘制代码
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
