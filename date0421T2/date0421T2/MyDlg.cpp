// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0421T2.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "date0421T2Doc.h"
#include "date0421T2View.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CFileDialog cfd(true);
	Cdate0421T2Doc *pDoc = ((Cdate0421T2View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();
	CDC *pc = GetDlgItem(IDC_STATIC)->GetDC();

	CImage img;
	img.Load(pDoc->filename);
	img.Draw(pc->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
}
