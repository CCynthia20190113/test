﻿
// date0420T2Doc.h: Cdate0420T2Doc 类的接口
//


#pragma once


class Cdate0420T2Doc : public CDocument
{
protected: // 仅从序列化创建
	Cdate0420T2Doc() noexcept;
	DECLARE_DYNCREATE(Cdate0420T2Doc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Cdate0420T2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	CRect cr;
	CPoint P1;
	CPoint P2;
	bool set;
	CPoint P3;
	int a;
	int b;
	bool f1;
	int x;
	int y;
	int z;
};
