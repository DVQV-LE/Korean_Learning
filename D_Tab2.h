#pragma once


// D_Tab2 대화 상자

class D_Tab2 : public CDialogEx
{
	DECLARE_DYNAMIC(D_Tab2)

public:
	void random(int* arr, int num = 8)
	{
		srand(time(NULL));
		int tmp;
		int rn;
		for (int i = 0; i < num - 1; i++)
		{
			rn = rand() % (num - i) + i;
			tmp = arr[i];
			arr[i] = arr[rn];
			arr[rn] = tmp;
	}
}
	D_Tab2(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~D_Tab2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	HICON m_hicon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString Qarr[8] = { _T("팔을 쭉 뻗고 기지개 켜는 모습을 ______내 보세요."),
		_T("______에서 시원한 물을 꺼내 마셔요."),
		_T("우리 철봉에 ______ 매달리기 놀이하자."),
		_T("내일 문방구에서 색종이를 할인______ 합니다."),
		_T("친구들에게 개구리의 ______를 소개해 줄래?"),
		_T("오랜만에 풀밭에서 ______를 만났어요."),
		_T("잃어버린 공책을 찾았다니 정말 ______이야."),
		_T("얘야, 내가 재미있는 ______를 들려 줄게.")
	};
	CString Aarr[8] = { _T("흉내"), _T("냉장고"), _T("대롱대롱"), _T("판매"), _T("생김새"), _T("달팽이"), _T("다행"), _T("얘기") };
	CString Warr[16] = { _T("훙내"), _T("융내"), _T("넹장고"), _T("넝장고"), _T("다롱다롱"), _T("두롱두롱"),
						_T("판마"), _T("판미"), _T("생김사"), _T("셍김새"), _T("달핑이"), _T("달평이"),
						_T("다항"), _T("다힝"), _T("야기"), _T("여기") };
	int Qindex = 0;
	int Aindex = 2;
	int Qnum = 0;

	int UserCindex = 0;
	int QOrder[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CStatic m_question;
	CStatic m_cic;
	CButton m_ac;
	CButton m_check1;
	CButton m_check2;
	CButton m_check3;

	afx_msg void OnBnClickedAnswercheck();
	afx_msg void OnBnClickedChangequestion();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
};
