
// DaehwaDlg.h: 헤더 파일
//

#pragma once
#include "D_Tab1.h"
#include "D_Tab2.h"
#include "D_Tab3.h"

// CDaehwaDlg 대화 상자
class CDaehwaDlg : public CDialogEx
{
// 생성입니다.
public:
	CDaehwaDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DAEHWA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	D_Tab1 *pDlg1;
	D_Tab2 *pDlg2;
	D_Tab3 *pDlg3;
	CTabCtrl m_tabTest;
};
