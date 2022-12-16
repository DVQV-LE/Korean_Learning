// D_Tab2.cpp: 구현 파일
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "framework.h"
#include "pch.h"
#include "Daehwa.h"
#include "D_Tab2.h"
#include "afxdialogex.h"


// D_Tab2 대화 상자

IMPLEMENT_DYNAMIC(D_Tab2, CDialogEx)

D_Tab2::D_Tab2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

D_Tab2::~D_Tab2()
{
}

void D_Tab2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Question, m_question);
	DDX_Control(pDX, IDC_CIC, m_cic);
	DDX_Control(pDX, IDC_AnswerCheck, m_ac);
}


BEGIN_MESSAGE_MAP(D_Tab2, CDialogEx)
	ON_BN_CLICKED(IDOK, &D_Tab2::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &D_Tab2::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_AnswerCheck, &D_Tab2::OnBnClickedAnswercheck)
	ON_BN_CLICKED(IDC_ChangeQuestion, &D_Tab2::OnBnClickedChangequestion)
	ON_BN_CLICKED(IDC_CHECK1, &D_Tab2::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &D_Tab2::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &D_Tab2::OnBnClickedCheck3)
END_MESSAGE_MAP()


// D_Tab2 메시지 처리기


void D_Tab2::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
//	CDialogEx::OnOK();
}


void D_Tab2::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//CDialogEx::OnCancel();
}


void D_Tab2::OnBnClickedAnswercheck()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (UserCindex == Aindex) {
		m_cic.SetWindowText(_T("정답입니다. 참 잘했어요"));
	}
	else { m_cic.SetWindowText(_T("오답입니다. 다음에 다시 도전해 보세요.")); }
}


void D_Tab2::OnBnClickedChangequestion()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	((CButton*)GetDlgItem(IDC_CHECK1))->SetCheck(0);
	((CButton*)GetDlgItem(IDC_CHECK2))->SetCheck(0);
	((CButton*)GetDlgItem(IDC_CHECK3))->SetCheck(0);
	m_cic.SetWindowText(_T(""));

	Qindex++;
	if (Qindex >= 8) {
		random(QOrder);
		Qindex = 0;
	}

	srand(time(NULL));
	Aindex = rand() % 3; //0~2
	Qnum = QOrder[Qindex];
	m_question.SetWindowText(Qarr[Qnum]);

	switch (Aindex) {
	case 0:
		SetDlgItemText(IDC_CHECK1, Aarr[Qnum]);
		SetDlgItemText(IDC_CHECK2, Warr[2 * Qnum]);
		SetDlgItemText(IDC_CHECK3, Warr[2 * Qnum + 1]);
		break;
	case 1:
		SetDlgItemText(IDC_CHECK1, Warr[2 * Qnum]);
		SetDlgItemText(IDC_CHECK2, Aarr[Qnum]);
		SetDlgItemText(IDC_CHECK3, Warr[2 * Qnum + 1]);
		break;
	case 2:
		SetDlgItemText(IDC_CHECK1, Warr[2 * Qnum]);
		SetDlgItemText(IDC_CHECK2, Warr[2 * Qnum + 1]);
		SetDlgItemText(IDC_CHECK3, Aarr[Qnum]);
		break;
	}
}


void D_Tab2::OnBnClickedCheck1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (((CButton*)GetDlgItem(IDC_CHECK1))->GetCheck()) {
		UserCindex = 0;
		((CButton*)GetDlgItem(IDC_CHECK2))->SetCheck(0);
		((CButton*)GetDlgItem(IDC_CHECK3))->SetCheck(0);
	}
}


void D_Tab2::OnBnClickedCheck2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (((CButton*)GetDlgItem(IDC_CHECK2))->GetCheck()) {
		UserCindex = 1;
		((CButton*)GetDlgItem(IDC_CHECK1))->SetCheck(0);
		((CButton*)GetDlgItem(IDC_CHECK3))->SetCheck(0);
	}
}


void D_Tab2::OnBnClickedCheck3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (((CButton*)GetDlgItem(IDC_CHECK3))->GetCheck()) {
		UserCindex = 2;
		((CButton*)GetDlgItem(IDC_CHECK1))->SetCheck(0);
		((CButton*)GetDlgItem(IDC_CHECK2))->SetCheck(0);
	}
}
