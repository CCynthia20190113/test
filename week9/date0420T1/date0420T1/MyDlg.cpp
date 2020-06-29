// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0420T1.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include  "math.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, editc(_T(""))
	, resultc(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, editv);
	DDX_Text(pDX, IDC_EDIT1, editc);
	DDX_Control(pDX, IDC_EDIT2, resultv);
	DDX_Text(pDX, IDC_EDIT2, resultc);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &MyDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &MyDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON10, &MyDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON9, &MyDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON11, &MyDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON4, &MyDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON15, &MyDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &MyDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON12, &MyDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON17, &MyDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON13, &MyDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON18, &MyDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON7, &MyDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &MyDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON14, &MyDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON19, &MyDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '1';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '2';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '3';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '0';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '4';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '5';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '6';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '7';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '8';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	editc += '9';
	UpdateData(false);
}


void MyDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 1;

}


void MyDlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 2;
}


void MyDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 3;
}


void MyDlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 4;
}


void MyDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 5;
}


void MyDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = 6;
}


void MyDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	editc =editc.Left(editc.GetLength()-1);
	UpdateData(false);
}


void MyDlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	editc = "";
	resultc = "";
	UpdateData(false);
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}


void MyDlg::SaveFirstValue()
{
	// TODO: 在此处添加实现代码.
	n1 = _wtof(editc);
	editc = "";
	UpdateData(false);
}


void MyDlg::Calculator()
{
	// TODO: 在此处添加实现代码.
	n2 = _wtof(editc);
	double result = 0.0f;
	switch(mFlag)
	{case 1:
		result = n1 + n2;
		break;
	case 2:
		result = n1 - n2;
		break;
	case 3:
		result = n1 * n2;
		break;
	case 4:
		result = n1 / n2;
		break;
	case 5:
		result = sqrt(n1);
		break;
	case 6:
		result = 1/n1;
		break;

	}
	resultc.Format(_T("%f"),result);
	UpdateData(false);

}
