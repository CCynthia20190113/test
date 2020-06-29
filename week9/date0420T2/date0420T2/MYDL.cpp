// MYDL.cpp: 实现文件
//

#include "pch.h"
#include "date0420T2.h"
#include "MYDL.h"
#include "afxdialogex.h"
#include"date0420T2Doc.h"
#include"date0420T2View.h"


// MYDL 对话框

IMPLEMENT_DYNAMIC(MYDL, CDialogEx)

MYDL::MYDL(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, r(0)
	, g(0)
	, y(0)
{

}

MYDL::~MYDL()
{
}

void MYDL::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDX_Text(pDX, IDC_EDIT3, g);
	DDX_Text(pDX, IDC_EDIT2, y);
}


BEGIN_MESSAGE_MAP(MYDL, CDialogEx)
	ON_BN_CLICKED(IDOK, &MYDL::OnBnClickedOk)
END_MESSAGE_MAP()


// MYDL 消息处理程序


BOOL MYDL::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE

	
	
}


void MYDL::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	UpdateData(TRUE);

	Cdate0420T2Doc *pDoc = ((Cdate0420T2View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();

	pDoc->x = r;
	pDoc->y = g;
	pDoc->z = y;


	UpdateData(false);

}
