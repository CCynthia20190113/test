#pragma once


// MYDL 对话框

class MYDL : public CDialogEx
{
	DECLARE_DYNAMIC(MYDL)

public:
	MYDL(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~MYDL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int r;
	int g;
	int y;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
