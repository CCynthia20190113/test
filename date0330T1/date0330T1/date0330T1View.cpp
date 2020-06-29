
// date0330T1View.cpp: Cdate0330T1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0330T1.h"
#endif

#include "date0330T1Doc.h"
#include "date0330T1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0330T1View

IMPLEMENT_DYNCREATE(Cdate0330T1View, CView)

BEGIN_MESSAGE_MAP(Cdate0330T1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cdate0330T1View::OnFileOpen)
END_MESSAGE_MAP()

// Cdate0330T1View 构造/析构

Cdate0330T1View::Cdate0330T1View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0330T1View::~Cdate0330T1View()
{
}

BOOL Cdate0330T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0330T1View 绘图

void Cdate0330T1View::OnDraw(CDC* pDC)
{
	Cdate0330T1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	/*CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);

	CString filename = cfd.GetPathName();


	*/

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0330T1View 诊断

#ifdef _DEBUG
void Cdate0330T1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0330T1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0330T1Doc* Cdate0330T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0330T1Doc)));
	return (Cdate0330T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0330T1View 消息处理程序


void Cdate0330T1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码

	
	CFileDialog cfd(true); 
	
	int r = cfd.DoModal();  
		CClientDC dc(this);

		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		

	if (r == IDOK)
	{
		

		dc.TextOutW(img.GetWidth()+100, img.GetHeight(), filename);
	}
	
	

	img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	

}
