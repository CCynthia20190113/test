// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0407practice02.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "date0407practice02Doc.h"
#include "date0407practice02View.h"


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
	
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// MyDlg 消息处理程序




void MyDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	
	
	CString st;
	CString str;
	GetDlgItemText(IDC_EDIT1, st); //用GetDlgItemText(文本框ID,字符串来源),将文本框内容存放知到字符串中.
	GetDlgItemText(IDC_EDIT2, str); //用GetDlgItemText(文本框ID,字符串来源),将文本框内容存放知到字符串中.
	SetDlgItemText(IDC_EDIT1, str);//用SetDlgItemText(文本框ID,字符串),将文本框的内容设置为字道符串的内容.
	SetDlgItemText(IDC_EDIT2, st);//用SetDlgItemText(文本框ID,字符串),将文本框的内容设置为字道符串的内容.

}
