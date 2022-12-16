#pragma once


// D_Tab3 대화 상자

class D_Tab3 : public CDialogEx
{
	DECLARE_DYNAMIC(D_Tab3)

public:
	D_Tab3(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~D_Tab3();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CStatic m_static1;
	CStatic m_static2;
	CStatic m_static3;
	CButton m_pt1;
	CButton m_pt2;
	CButton m_pt3;
	CButton m_pt4;
	CBitmapButton  m_CBitmapButton;
	CButton m_ans_check;
	void setting();
	int announce = 0;
	CString Answer_AfxMeg1[14] = { "네모난 각설탕이 달다.", "동그란 나이테가 많다.", "돗자리를 차곡차곡 접다.", "라일락에서 향기가 나다.", "물이 무릎까지 차오르다.", "부엌에서 요리를 하다.", "수염이 덥수룩하게 나다.", "단풍이 울긋불긋 물들다.", "주사위를 또르르 굴리다.", "천둥과 번개가 내리치다.", "칼국수를 호로록 먹다.", "태극기가 바람에 펄럭이다.", "짝꿍과 팔씨름을 벌이다.", "쟁반에 한과가 담겨있다." };
	CString Answer_AfxMeg2[14] = { "엄마가 차에 각설탕을 넣는다.", "베어낸 나무에 나이테가 있다.", "잔디밭에 돗자리를 깔았다.", "봄이 되면 라일락이 핀다.", "넘어져서 무릎을 찧었다.", "부엌에서 달그락 소리가 난다.", "삼촌 턱에 수염이 자랐다.", "설날에 한복을 차려입는다.", "동생과 주사위 놀이를 한다.", "갑자기 천둥이 울리기 시작한다.", "칼국수 반죽을 방망이로 민다.", "나도 문 앞에 태극기를 달았다.", "형과 동생이 팔씨름했다.", "한과를 한 입 베어 문다." };
	CString Answer_AfxMeg3[14] = { "차가 쓰기 때문이다.", "나이테가 모두 13개다.", "돗자리 위에 앉아 점심을 먹는다.", "자주색, 흰색 꽃이 예쁘다.", "무릎이 까져서 피가 난다.", "궁금해서 부엌으로 가 본다.", "수염을 만지니 까끌까끌하다.", "한복 색이 울긋불긋 곱다.", "동생이 주사위를 높이 던졌다.", "천둥소리에 놀라 잠에서 깼다.", "반죽을 칼로 가늘게 썬다. ", "나도 문 앞에 태극기를 달았다.", "두 사람의 팔에 힘이 들어갔다.", "입 안에서 바삭 소리가 난다." };
	CString Answer_AfxMeg4[14] = { "각설탕을 넣으니 차가 달콤하다.", "나무의 나이가 13살인가 보다.", "밖에서 먹으니 더 맛있다.", "바람에 라일락 꽃향기가 퍼진다.", "상처 난 무릎에 약을 바른다.", "언니가 설거지를 하고 있다.", "삼촌이 수염을 깎는다.", "울긋불긋한 신발도 신는다.","던진 주사위에서 6이 나왔다.", "비가 쏟아지기 시작한다.", "칼국수 면을 물에 삶는다.", "집집마다 태극기가 휘날린다.", "형이 팔씨름에서 이겼다.", "한과가 많이 달지 않다." };
	int m_cnt = 0;
	int Sound();
	int wave1 = 0;
	int wave2 = 0;
	int wave3 = 0;
	int wave4 = 0;
	int m_pt_cnt;
	afx_msg void OnBnClickedBefore();
	afx_msg void OnBnClickedAfter();
	afx_msg void OnBnClickedAnsCheck();
	afx_msg void OnBnClickedSound();
	afx_msg void OnBnClickedDicPt1();
	afx_msg void OnBnClickedDicPt2();
	afx_msg void OnBnClickedDicPt3();
	afx_msg void OnBnClickedDicPt4();
};

