
// 第五周实验1View.cpp: C第五周实验1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周实验1.h"
#endif

#include "第五周实验1Doc.h"
#include "第五周实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周实验1View

IMPLEMENT_DYNCREATE(C第五周实验1View, CView)

BEGIN_MESSAGE_MAP(C第五周实验1View, CView)
	ON_COMMAND(ID_VIEW_SHOWNAME, &C第五周实验1View::OnViewShowname)
END_MESSAGE_MAP()

// C第五周实验1View 构造/析构

C第五周实验1View::C第五周实验1View() noexcept
{
	// TODO: 在此处添加构造代码

}

C第五周实验1View::~C第五周实验1View()
{
}

BOOL C第五周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周实验1View 绘图

void C第五周实验1View::OnDraw(CDC* /*pDC*/)
{
	C第五周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周实验1View 诊断

#ifdef _DEBUG
void C第五周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周实验1Doc* C第五周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周实验1Doc)));
	return (C第五周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周实验1View 消息处理程序
void C第五周实验1View::Show()
{
	// TODO: 在此添加命令处理程序代码
	
}

void C第五周实验1View::OnViewShowname()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	dc.TextOutW(250, 250, _T("鱼头星星"));
}
