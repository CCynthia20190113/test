
// date0413T2View.cpp: Cdate0413T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0413T2.h"
#endif

#include "date0413T2Doc.h"
#include "date0413T2View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0413T2View

IMPLEMENT_DYNCREATE(Cdate0413T2View, CView)

BEGIN_MESSAGE_MAP(Cdate0413T2View, CView)
	ON_COMMAND(ID_PLUS, &Cdate0413T2View::OnPlus)
END_MESSAGE_MAP()

// Cdate0413T2View 构造/析构

Cdate0413T2View::Cdate0413T2View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0413T2View::~Cdate0413T2View()
{
}

BOOL Cdate0413T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0413T2View 绘图

void Cdate0413T2View::OnDraw(CDC* /*pDC*/)
{
	Cdate0413T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0413T2View 诊断

#ifdef _DEBUG
void Cdate0413T2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0413T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0413T2Doc* Cdate0413T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0413T2Doc)));
	return (Cdate0413T2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0413T2View 消息处理程序


void Cdate0413T2View::OnPlus()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
}


