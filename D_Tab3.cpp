// D_Tab3.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "Daehwa.h"
#include "D_Tab3.h"
#include "afxdialogex.h"
#include "cstringt.h"
#include <mmsystem.h>


// D_Tab3 대화 상자

IMPLEMENT_DYNAMIC(D_Tab3, CDialogEx)

D_Tab3::D_Tab3(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{
	m_pt_cnt = 0;
}

D_Tab3::~D_Tab3()
{
	
}

void D_Tab3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC1, m_static1);
	DDX_Control(pDX, IDC_STATIC2, m_static2);
	DDX_Control(pDX, IDC_STATIC3, m_static3);
	DDX_Control(pDX, IDC_DIC_PT1, m_pt1);
	DDX_Control(pDX, IDC_DIC_PT2, m_pt2);
	DDX_Control(pDX, IDC_DIC_PT3, m_pt3);
	DDX_Control(pDX, IDC_DIC_PT4, m_pt4);
	DDX_Control(pDX, IDC_SOUND, m_CBitmapButton);
	DDX_Control(pDX, IDC_ANS_CHECK, m_ans_check);
}


BEGIN_MESSAGE_MAP(D_Tab3, CDialogEx)
	ON_BN_CLICKED(IDOK, &D_Tab3::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &D_Tab3::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BEFORE, &D_Tab3::OnBnClickedBefore)
	ON_BN_CLICKED(IDC_AFTER, &D_Tab3::OnBnClickedAfter)
	ON_BN_CLICKED(IDC_ANS_CHECK, &D_Tab3::OnBnClickedAnsCheck)
	ON_BN_CLICKED(IDC_SOUND, &D_Tab3::OnBnClickedSound)
	ON_BN_CLICKED(IDC_DIC_PT1, &D_Tab3::OnBnClickedDicPt1)
	ON_BN_CLICKED(IDC_DIC_PT2, &D_Tab3::OnBnClickedDicPt2)
	ON_BN_CLICKED(IDC_DIC_PT3, &D_Tab3::OnBnClickedDicPt3)
	ON_BN_CLICKED(IDC_DIC_PT4, &D_Tab3::OnBnClickedDicPt4)
END_MESSAGE_MAP()


// D_Tab3 메시지 처리기


void D_Tab3::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
//	CDialogEx::OnOK();
}


void D_Tab3::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//CDialogEx::OnCancel();
}


void D_Tab3::OnBnClickedBefore()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	announce = 0;
	setting();
}


void D_Tab3::OnBnClickedAfter()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_cnt++;
	announce = 1;
	setting();
}


void D_Tab3::OnBnClickedDicPt1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pt_cnt = 1;
	announce = 1;
	setting();
	m_static3.SetWindowText("첫번째 파트입니다.");
}


void D_Tab3::OnBnClickedDicPt2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pt_cnt = 2;
	announce = 1;
	setting();
	m_static3.SetWindowText("두번째 파트입니다.");
}


void D_Tab3::OnBnClickedDicPt3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pt_cnt = 3;
	announce = 1;
	setting();
	m_static3.SetWindowText("세번째 파트입니다.");
}


void D_Tab3::OnBnClickedDicPt4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int m_pt_cnt = 4;
	announce = 1;
	setting();
	m_static3.SetWindowText("네번째 파트입니다.");
}


void D_Tab3::OnBnClickedAnsCheck()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_pt_cnt == 1) {
		AfxMessageBox("정답: " + Answer_AfxMeg1[m_cnt]);
	}
	else if (m_pt_cnt == 2) {
		AfxMessageBox("정답: " + Answer_AfxMeg2[m_cnt]);
	}
	else if (m_pt_cnt == 3) {
		AfxMessageBox("정답: " + Answer_AfxMeg3[m_cnt]);
	}
	else if (m_pt_cnt == 4) {
		AfxMessageBox("정답: " + Answer_AfxMeg4[m_cnt]);
	}
	if (m_cnt == 13) {
		AfxMessageBox("해당파트의 마지막 문제입니다! \n이전 버튼을 눌러 다른 파트의 문제를 시작해주세요!");
	}
}


void D_Tab3::OnBnClickedSound()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	switch (m_pt_cnt) {
	case 1:
		wave1 = m_cnt;
		Sound();
		break;
	case 2:
		wave2 = m_cnt;
		Sound();
		break;
	case 3:
		wave3 = m_cnt;
		Sound();
		break;
	case 4:
		wave4 = m_cnt;
		Sound();
		break;
	}
}


void D_Tab3::setting()
{
	// TODO: 여기에 구현 코드 추가.
	switch (announce) {
	case 0:
		GetDlgItem(IDC_DIC_PT1)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_DIC_PT2)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_DIC_PT3)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_DIC_PT4)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_STATIC3)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_SOUND)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_BEFORE)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_AFTER)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_INPUT_STR_EDIT1)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_ANS_CHECK)->ShowWindow(SW_HIDE);
		m_static1.SetWindowText("받아쓰기 파트입니다!");
		m_static2.SetWindowText("원하시는 번호를 선택하여, 받아쓰기를 시작해보세요!");
		break;
	case 1:
		GetDlgItem(IDC_DIC_PT1)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_DIC_PT2)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_DIC_PT3)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_DIC_PT4)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_STATIC3)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_SOUND)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_BEFORE)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_AFTER)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_INPUT_STR_EDIT1)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_ANS_CHECK)->ShowWindow(SW_SHOW);
		m_static1.SetWindowText("다음 파일을 듣고, 받아쓰세요.");
		m_static2.SetWindowText("들리는 문장을 차례대로 받아쓰세요.");
		break;
	}
}


int D_Tab3::Sound()
{
	// TODO: 여기에 구현 코드 추가.
	switch (wave1)
	{
	case 0:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_1), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 1:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_2), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 2:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_3), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 3:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_4), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 4:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_5), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 5:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_6), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 6:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_7), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 7:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_8), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 8:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_9), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 9:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_10), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 10:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_11), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 11:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_12), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 12:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_13), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 13:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE1_14), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	}
	return 0;
	
	switch (wave2)
	{
	case 0:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_1), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 1:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_2), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 2:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_3), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 3:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_4), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 4:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_5), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 5:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_6), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 6:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_7), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 7:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_8), NULL, SND_ASYNC | SND_RESOURCE);

	case 8:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_9), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 9:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_10), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 10:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_11), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 11:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_12), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 12:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_13), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 13:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE2_14), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	}
	
	switch (wave3)
	{
	case 0:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_1), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 1:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_2), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 2:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_3), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 3:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_4), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 4:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_5), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 5:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_6), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 6:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_7), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 7:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_8), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 8:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_9), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 9:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_10), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 10:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_11), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 11:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_12), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 12:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_13), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 13:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE3_14), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	}
	
	switch (wave4)
	{
	case 0:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_1), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 1:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_2), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 2:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_3), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 3:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_4), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 4:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_5), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 5:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_6), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 6:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_7), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 7:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_8), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 8:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_9), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 9:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_10), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 10:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_11), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 11:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_12), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 12:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_13), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	case 13:
		PlaySound((LPCSTR)MAKEINTRESOURCE(IDR_WAVE4_14), NULL, SND_ASYNC | SND_RESOURCE);

		break;
	}
}