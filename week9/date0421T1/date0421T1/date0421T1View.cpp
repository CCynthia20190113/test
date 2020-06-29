
// date0421T1View.cpp: Cdate0421T1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0421T1.h"
#endif

#include "date0421T1Doc.h"
#include "date0421T1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0421T1View

IMPLEMENT_DYNCREATE(Cdate0421T1View, CView)

BEGIN_MESSAGE_MAP(Cdate0421T1View, CView)
	ON_COMMAND(ID_Dlg, &Cdate0421T1View::OnDlg)
END_MESSAGE_MAP()

// Cdate0421T1View 构造/析构

Cdate0421T1View::Cdate0421T1View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0421T1View::~Cdate0421T1View()
{
}

BOOL Cdate0421T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0421T1View 绘图

void Cdate0421T1View::OnDraw(CDC* /*pDC*/)
{
	Cdate0421T1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0421T1View 诊断

#ifdef _DEBUG
void Cdate0421T1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0421T1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0421T1Doc* Cdate0421T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0421T1Doc)));
	return (Cdate0421T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0421T1View 消息处理程序


void Cdate0421T1View::OnDlg()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog dlg(true);
	int r = dlg.DoModal();

	CClientDC dc(this);
	CString filename;
	if (r == IDOK)
	{
		this->UpdateData(true);
		 filename = dlg.GetPathName();
		//dc.TextOutW(200, 200, filename);
		UpdateData(false);

		
	}
	CStdioFile file;
	file.Open(_T("C:\\Users\\dell\\source\\repos\\date0421T1\\abc.txt"), CFile::modeCreate | CFile::modeWrite );
	file.WriteString(filename);
	file.Close();
	

}
