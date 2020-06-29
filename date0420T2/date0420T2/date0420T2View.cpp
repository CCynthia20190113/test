
// date0420T2View.cpp: Cdate0420T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0420T2.h"
#endif

#include "date0420T2Doc.h"
#include "date0420T2View.h"
#include"MyDlg.h"
#include"MYDL.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0420T2View

IMPLEMENT_DYNCREATE(Cdate0420T2View, CView)

BEGIN_MESSAGE_MAP(Cdate0420T2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOVE()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_ELLIPSE, &Cdate0420T2View::OnEllipse)
	ON_COMMAND(ID_CORLOR, &Cdate0420T2View::OnCorlor)
END_MESSAGE_MAP()

// Cdate0420T2View 构造/析构

Cdate0420T2View::Cdate0420T2View() noexcept
{
	// TODO: 在此处添加构造代码
	

}

Cdate0420T2View::~Cdate0420T2View()
{
}

BOOL Cdate0420T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0420T2View 绘图

void Cdate0420T2View::OnDraw(CDC* pDC)
{
	Cdate0420T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (pDoc->f1)
	{

		//pDC->Ellipse(300 - pDoc->b, 300 - pDoc->a, 400 + pDoc->b, 400 + pDoc->a);
		CClientDC DC(this);
		DC.Ellipse(300 - pDoc->a, 300 - pDoc->b, 400 + pDoc->a, 400 + pDoc->b);

	}
	
	{
		CBrush brush((RGB(i, j, k)));
		CBrush *oldbrush = pDC->SelectObject(&brush);
		if (pDoc->set)
		{
			pDC->Ellipse(pDoc->P1.x, pDoc->P1.y, pDoc->P3.x, pDoc->P3.y);
			pDC->SelectObject(oldbrush);

		}
		else
		{

			pDC->Ellipse(pDoc->P1.x, pDoc->P1.y, pDoc->P2.x, pDoc->P2.y);
			pDC->SelectObject(oldbrush);
		}
	}

	// TODO: 在此处为本机数据添加绘制代码


	
}


// Cdate0420T2View 诊断

#ifdef _DEBUG
void Cdate0420T2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0420T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0420T2Doc* Cdate0420T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0420T2Doc)));
	return (Cdate0420T2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0420T2View 消息处理程序


void Cdate0420T2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	SetCapture();

	CView::OnLButtonDown(nFlags, point);
	Cdate0420T2Doc *pDc = GetDocument();
	CClientDC dc(this);

	pDc->set = true;
	pDc->P1 = point;


	
	


}


void Cdate0420T2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	ReleaseCapture();
	CView::OnLButtonUp(nFlags, point);
	Cdate0420T2Doc *pDc = GetDocument();
	CClientDC dc(this);
	
	
	

	pDc->P2 = point;
	pDc->set = false;


	if (point.x>300 - pDc->a&&point.y>300 - pDc->b&&point.x <400 + pDc->a&&point.y<400 + pDc->b)
	{
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		CBrush* pOldBrush = (CBrush*)dc.SelectStockObject(NULL_BRUSH);

		pOldPen = dc.SelectObject(&pen);


		dc.Rectangle(300 - pDc->a, 300 - pDc->b, 400 + pDc->a, 400 + pDc->b);
		dc.SelectObject(pOldBrush);
		

		
	}

}


void Cdate0420T2View::OnMove(int x, int y)
{
	CView::OnMove(x, y);

	
	

	// TODO: 在此处添加消息处理程序代码
}


void Cdate0420T2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
	Cdate0420T2Doc *pDc = GetDocument();
	CClientDC dc(this);



	pDc->P3 = point;

	if (pDc->set)
	{
		i += 10;
		j += 10;
		k += 10;

		Invalidate();
	}

	

	

	
}


void Cdate0420T2View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
}


void Cdate0420T2View::OnCorlor()
{
	// TODO: 在此添加命令处理程序代码
	Cdate0420T2Doc *pDoc = GetDocument();
	CClientDC dc(this);

	CRect r;
	GetClientRect(r);

	MYDL *dlg =new MYDL;
	int t = dlg->DoModal();
	if (t == IDOK)
	{
		CBrush Brush;
		Brush.CreateSolidBrush(RGB(pDoc->x, pDoc->y, pDoc->z));
		
		

		
		dc.Ellipse(pDoc->P1.x, pDoc->P1.y, pDoc->P2.x, pDoc->P2.y);
		dc.SelectObject(&Brush);
		
	}



}
