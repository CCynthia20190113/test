
// 第三周实验3Doc.cpp: C第三周实验3Doc 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周实验3.h"
#endif

#include "第三周实验3Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C第三周实验3Doc

IMPLEMENT_DYNCREATE(C第三周实验3Doc, CDocument)

BEGIN_MESSAGE_MAP(C第三周实验3Doc, CDocument)
END_MESSAGE_MAP()


// C第三周实验3Doc 构造/析构

C第三周实验3Doc::C第三周实验3Doc() noexcept
{
	// TODO: 在此添加一次性构造代码
	

}


C第三周实验3Doc::~C第三周实验3Doc()
{
	r1.BottomRight().x = 100;
	r1.BottomRight().y = 200;
	r1.TopLeft().x = 10;
	r1.TopLeft().y = 20;
	r2.BottomRight().x = 350;
	r2.BottomRight().y = 400;
	r2.TopLeft().x = 200;
	r2.TopLeft().y = 300;
	r3.BottomRight().x = 500;
	r3.BottomRight().y = 450;
	r3.TopLeft().x = 400;
	r3.TopLeft().y = 400;
	a = 15;
	b = 25;
}

BOOL C第三周实验3Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// C第三周实验3Doc 序列化

void C第三周实验3Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void C第三周实验3Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void C第三周实验3Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void C第三周实验3Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// C第三周实验3Doc 诊断

#ifdef _DEBUG
void C第三周实验3Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C第三周实验3Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C第三周实验3Doc 命令
