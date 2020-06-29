// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0420T2.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "date0420T2Doc.h"
#include "date0420T2View.h"



// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, x);
	DDX_Text(pDX, IDC_EDIT1, y);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	

	UpdateData();
	
	
	
	Cdate0420T2Doc *pDoc = ((Cdate0420T2View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();
	
	pDoc->a = x;
	pDoc->b = y;
	pDoc->f1 = true;

	

	UpdateData(FALSE);
}


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE



}
