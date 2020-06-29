
// date0420T1View.cpp: Cdate0420T1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0420T1.h"
#endif

#include "date0420T1Doc.h"
#include "date0420T1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0420T1View

IMPLEMENT_DYNCREATE(Cdate0420T1View, CView)

BEGIN_MESSAGE_MAP(Cdate0420T1View, CView)
END_MESSAGE_MAP()

// Cdate0420T1View 构造/析构

Cdate0420T1View::Cdate0420T1View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0420T1View::~Cdate0420T1View()
{
}

BOOL Cdate0420T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0420T1View 绘图

void Cdate0420T1View::OnDraw(CDC* /*pDC*/)
{
	Cdate0420T1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);


	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0420T1View 诊断

#ifdef _DEBUG
void Cdate0420T1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0420T1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0420T1Doc* Cdate0420T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0420T1Doc)));
	return (Cdate0420T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0420T1View 消息处理程序
