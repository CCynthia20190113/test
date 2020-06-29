// MyDlgo.cpp: 实现文件
//

#include "pch.h"
#include "week7_1.h"
#include "MyDlgo.h"
#include "afxdialogex.h"


// MyDlgo 对话框

IMPLEMENT_DYNAMIC(MyDlgo, CDialogEx)

MyDlgo::MyDlgo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, r(0)
{

}

MyDlgo::~MyDlgo()
{
}

void MyDlgo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, r);
}


BEGIN_MESSAGE_MAP(MyDlgo, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &MyDlgo::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &MyDlgo::OnEnChangeEdit3)
END_MESSAGE_MAP()


// MyDlgo 消息处理程序


void MyDlgo::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyDlgo::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
