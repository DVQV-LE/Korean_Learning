// D_Tab1.cpp: 구현 파일
//

#include "pch.h"
#include "Daehwa.h"
#include "D_Tab1.h"
#include "afxdialogex.h"


// D_Tab1 대화 상자

IMPLEMENT_DYNAMIC(D_Tab1, CDialogEx)

D_Tab1::D_Tab1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{


}

D_Tab1::~D_Tab1()
{
}

void D_Tab1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON2, m_btn);
	DDX_Control(pDX, IDC_BUTTON3, m_btn2);
	DDX_Control(pDX, IDC_BUTTON4, m_btn3);
	DDX_Control(pDX, IDC_PROGRESS, m_Progress);
	DDX_Control(pDX, IDOK, m_start);
}


BEGIN_MESSAGE_MAP(D_Tab1, CDialogEx)
	ON_BN_CLICKED(IDOK, &D_Tab1::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &D_Tab1::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON4, &D_Tab1::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &D_Tab1::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &D_Tab1::OnBnClickedButton3)
END_MESSAGE_MAP()


// D_Tab1 메시지 처리기


void D_Tab1::OnBnClickedOk()
{

	srand((unsigned int)time(NULL));
	Category_Q = rand() % 7;
	progress_q = 0;
	RollTheQuestion();
	s_progress.Format(_T("%d/10"), progress_q);
	Score = 0;
	m_Progress.SetWindowText(s_progress);
	m_start.ShowWindow(SW_HIDE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
//	CDialogEx::OnOK();
}


void D_Tab1::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnCancel();
}


void D_Tab1::OnBnClickedButton4()
{
	IsThisCorrect(3);
	if (AfxMessageBox(CorORNot, MB_OK) == IDOK) {
		GetProgress();
		RollTheQuestion();
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void D_Tab1::OnBnClickedButton2()
{
	IsThisCorrect(1);
	if (AfxMessageBox(CorORNot, MB_OK) == IDOK) {
		GetProgress();
		RollTheQuestion();
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void D_Tab1::OnBnClickedButton3()
{
	IsThisCorrect(2);
	if (AfxMessageBox(CorORNot, MB_OK) == IDOK) {
		GetProgress();
		RollTheQuestion();
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void D_Tab1::RollTheQuestion()
{

		rnd_Q = progress_q+(Category_Q * 10);

		if (progress_q < 10) {
			MakeQuestion(rnd_Q);
		}
		else {
			str.Format(_T("종료!\n총점수:%d점"), Score);
			if (AfxMessageBox(str, MB_OK) == IDOK) {
				CDialogEx::OnOK();
			}
		}
		
	// TODO: 여기에 구현 코드 추가.
}


void D_Tab1::IsThisCorrect(int btn_n)
{
	if (btn_n == Question_NC[rnd_Q]) {

		Score += 1;
		CorORNot.Format(_T("정답\n%d점"), Score);
	}
	else {
		CorORNot.Format(_T("오답\n%d점"), Score);
	}
	// TODO: 여기에 구현 코드 추가.
	// TODO: 여기에 구현 코드 추가.
}


void D_Tab1::MakeQuestion(int r)
{

	

	CClientDC dc(this);
	CImage Q_i;
	Q_i.Load(Question_C[rnd_Q]);
	Q_i.Draw(dc, 160, 40, 200, 150);
	m_btn.SetWindowText(Question1[rnd_Q]);//버튼 설정
	m_btn2.SetWindowText(Question2[rnd_Q]);
	m_btn3.SetWindowText(Question3[rnd_Q]);

	// TODO: 여기에 구현 코드 추가.
	// TODO: 여기에 구현 코드 추가.
}


void D_Tab1::GetProgress()
{
	progress_q += 1;
	s_progress.Format(_T("%d/10"), progress_q);
	m_Progress.SetWindowText(s_progress);

	// TODO: 여기에 구현 코드 추가.
}
