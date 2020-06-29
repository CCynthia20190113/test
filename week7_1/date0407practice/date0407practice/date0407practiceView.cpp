
// date0407practiceView.cpp: Cdate0407practiceView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0407practice.h"
#endif

#include "date0407practiceDoc.h"
#include "date0407practiceView.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0407practiceView

IMPLEMENT_DYNCREATE(Cdate0407practiceView, CView)

BEGIN_MESSAGE_MAP(Cdate0407practiceView, CView)
	ON_COMMAND(ID_Dlg, &Cdate0407practiceView::OnDlg)
END_MESSAGE_MAP()

// Cdate0407practiceView 构造/析构

Cdate0407practiceView::Cdate0407practiceView() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0407practiceView::~Cdate0407practiceView()
{
}

BOOL Cdate0407practiceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0407practiceView 绘图

void Cdate0407practiceView::OnDraw(CDC* pDC)
{
	Cdate0407practiceDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0407practiceView 诊断

#ifdef _DEBUG
void Cdate0407practiceView::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0407practiceView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0407practiceDoc* Cdate0407practiceView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0407practiceDoc)));
	return (Cdate0407practiceDoc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0407practiceView 消息处理程序


void Cdate0407practiceView::OnDlg()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDlg0 *pD = new MyDlg0;

	MyDlg0 dlg;
	pD->flag = dlg.DoModal();
	if (pD->flag == IDOK)
	dc.TextOutW(200, 200, _T("你已退出对话框"));
}
