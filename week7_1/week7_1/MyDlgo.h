#pragma once


// MyDlgo 对话框

class MyDlgo : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlgo)

public:
	MyDlgo(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~MyDlgo();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	int x;
	int y;
	int r;
};
