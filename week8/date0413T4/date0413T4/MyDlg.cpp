// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0413T4.h"
#include "MyDlg.h"
#include "afxdialogex.h"



// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, t(_T(""))
	, a(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT3, t);
	DDX_Text(pDX, IDC_EDIT2, a);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "初始化的值";

	a = 0;
	t = "的值";
	flag = true;

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
	
	CString d, b, c;

	if (flag) 
	{
		b.Format(_T("%d"), a);
		
		c = s + b;
		GetDlgItem(IDC_EDIT3)->SetWindowTextW(c);
	}
	else
	{
		b.Format(_T("%d"), a);
		
		GetDlgItem(IDC_EDIT1)->GetWindowTextW(d);

		GetDlgItem(IDC_EDIT2)->GetWindowTextW(b);
		c = d + b;
		GetDlgItem(IDC_EDIT3)->SetWindowTextW(c);
	}
	flag = false;
}