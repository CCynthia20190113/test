
// week7_1View.cpp: Cweek71View 类的实现
//
#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week7_1.h"
#endif
#include "MyDlgo.h"
#include "week7_1Doc.h"
#include "week7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek71View

IMPLEMENT_DYNCREATE(Cweek71View, CView)

BEGIN_MESSAGE_MAP(Cweek71View, CView)
	ON_COMMAND(ID_POPOUT, &Cweek71View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
	//ON_COMMAND(ID_out, &Cweek71View::Onout)
	/*ON_COMMAND(ID_SHUOHIDE, &Cweek71View::OnShuohide)*/
END_MESSAGE_MAP()

// Cweek71View 构造/析构

Cweek71View::Cweek71View() noexcept
{
	// TODO: 在此处添加构造代码
	show_hide = 1;
	pD = NULL;

}

Cweek71View::~Cweek71View()
{
}

BOOL Cweek71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek71View 绘图

void Cweek71View::OnDraw(CDC* pDC)
{
	Cweek71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek71View 诊断

#ifdef _DEBUG
void Cweek71View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek71Doc* Cweek71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek71Doc)));
	return (Cweek71Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek71View 消息处理程序


void Cweek71View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlgo dlg;
	int t = dlg.DoModal();
	if(t==IDOK)
	{
		int R, X, Y;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;
		CRect rect(X-R,Y-R,X+R,Y+R);
		GetDC()->Ellipse(rect);
	}
}


void Cweek71View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlgo *pD= new MyDlgo;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}


void Cweek71View::Onout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlgo dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int R, X, Y;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;
		CRect rect(X - R, Y - R, X + R, Y + R);
		GetDC()->Ellipse(rect);
	}
}


void Cweek71View::OnShuohide()
{
	// TODO: 在此添加命令处理程序代码
	
	if (show_hide == 1)

		show_hide = 0;
	else
		show_hide = 1;
	pD->ShowWindow(1);

	
}
