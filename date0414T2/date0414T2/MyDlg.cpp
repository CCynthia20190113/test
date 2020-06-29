// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0414T2.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "date0414T2Doc.h"
#include "date0414T2View.h"
#include"framework.h"



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
	ON_EN_CHANGE(IDC_EDIT1, &MyDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	//Cdate0414T2Doc *pDoc = ((Cdate0414T2View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();
	//GetDlgItem(IDC_EDIT1)->SetWindowText(pDoc->filename);
	
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}



BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	Cdate0414T2Doc *pDoc = ((Cdate0414T2View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();

	SetDlgItemText(IDC_EDIT1, pDoc->filename);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
