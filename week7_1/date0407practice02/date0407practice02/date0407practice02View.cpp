
// date0407practice02View.cpp: Cdate0407practice02View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0407practice02.h"
#endif

#include "date0407practice02Doc.h"
#include "date0407practice02View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0407practice02View

IMPLEMENT_DYNCREATE(Cdate0407practice02View, CView)

BEGIN_MESSAGE_MAP(Cdate0407practice02View, CView)
	ON_COMMAND(ID_Dlg, &Cdate0407practice02View::OnDlg)
END_MESSAGE_MAP()

// Cdate0407practice02View 构造/析构

Cdate0407practice02View::Cdate0407practice02View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0407practice02View::~Cdate0407practice02View()
{
}

BOOL Cdate0407practice02View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0407practice02View 绘图

void Cdate0407practice02View::OnDraw(CDC* /*pDC*/)
{
	Cdate0407practice02Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0407practice02View 诊断

#ifdef _DEBUG
void Cdate0407practice02View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0407practice02View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0407practice02Doc* Cdate0407practice02View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0407practice02Doc)));
	return (Cdate0407practice02Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0407practice02View 消息处理程序


void Cdate0407practice02View::OnDlg()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
}
