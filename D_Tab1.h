#pragma once


// D_Tab1 대화 상자

class D_Tab1 : public CDialogEx
{
	DECLARE_DYNAMIC(D_Tab1)

public:
	D_Tab1(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~D_Tab1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CButton m_btn;
	CButton m_btn2;
	CButton m_btn3;
	CStatic m_Progress;
	CString s_progress;

	int Score;
	int Category_Q;
	int resolved[10] = { -1 };
	int resolve_p;

	int progress_q;
	int rnd_Q;

	int S_Btn;

	CString CorORNot;
	CString Question1[70] = { "가수","나무","타랑쥐","로켓","부자","바다다","사자","파기","자통차","창문"
							,"나레","감정","파도","꽃","게임","도깨비","개미","럭비공","모욕","빵"
							,"분탕","악어","자동차","등산","케이크","태권도","토끼","망고","키위","낙엽"
							,"닻","메론","보조개","뱀","간호사","하루","안경","조승달","대접","태양"
							,"한도","해마","귀남","군타","중나무","로봇","한계","배개","조소","연필"
							,"접시","친구","코가리","도끼","공범","한랑이","거울","닺잠","동서관","로켓"
							,"물고기","비빔밥","진발","호리","귀","칫솔","공","도마토","빌통","호박" };//김치찌개 정답

	CString Question2[70] = { "도토리","나방","다람쥐","너겟","모자","파나나","사장","아기","자동차","항문"
							,"가레","탐정","타조","땅","가을","나비","풍뎅이","축구공","목욕","팝"
							,"사탕","아기","자전거","수상","데이트","발레","펭귄","마귀","거미","단엽"
							,"낫","레몬","푸지게","햄","소방관","대우","장갑","초승달","귀접","왕자"
							,"부도","애마","거북","한타","대나무","한복","물개","배게","시소","한필"
							,"집시","전구","고기리","토끼","모범","노랑이","겨울","낮잠","도서관","부켓"
							,"불고기","비빕밥","신발","조리","쥐","식솔","콩","토마도","밀통","우박" };//콜라 정답

	CString Question3[70] = { "가방","따분","랑쥐","라켓","적자","바나나","짜장","포기","사동자","공문"
							,"카레","함정","사랑","하늘","축구","고양이","달팽이","야구공","요리","밥"
							,"소탕","홍어","자전커","책상","타이탄","피아노","탕진","학교","가위","각엽"
							,"팥","대문","무지개","캠","경찰관","여우","약속","아침","케첩","한양"
							,"포도","에마","귀북","낙타","소나무","도복","들개","베개","시조","단비"
							,"잡지","장구","코끼리","독기","표범","호랑이","가을","한참","토서관","라켓"
							,"풀고기","비두밥","제발","오리","위","잇솔","꽁","토마토","필통","엇박" };//아아 정답

	CString Question_C[70] = { "res/paint/singer.png" ,"res/paint/tree.png" ,"res/paint/ris.png","res/paint/racket.png","res/paint/hat.png","res/paint/banana.png","res/paint/lion.png","res/paint/baby.png","res/paint/car.png","res/paint/window.png"
	,"res/paint/curry.png","res/paint/detective.png","res/paint/wave.png","res/paint/sky.png","res/paint/autumn.png","res/paint/butterfly.png","res/paint/snail.png","res/paint/sports_rugby_man.png","res/paint/shower.png","res/paint/meal.png"
	,"res/paint/candy.png","res/paint/crecerdile.png","res/paint/bicycle.png","res/paint/table.png","res/paint/cake.png","res/paint/taekwondo.png","res/paint/penguin.png","res/paint/shool.png","res/paint/spider.png","res/paint/maple.png"
	,"res/paint/dot.png","res/paint/fruit_lemon.png","res/paint/rainbow.png","res/paint/snake.png","res/paint/firekeeper.png","res/paint/fox.png","res/paint/glove.png","res/paint/moon.png","res/paint/kechup.png","res/paint/sun.png"
	,"res/paint/grape.png","res/paint/seadragon.png","res/paint/turtle.png","res/paint/camel.png","res/paint/bamboo.png","res/paint/robot4_orange.png","res/paint/seal.png","res/paint/makura.png","res/paint/seesaw.png","res/paint/pencil.png"
	,"res/paint/plate.png","res/paint/friend.png","res/paint/elephant.png","res/paint/rabbit.png","res/paint/jagyuer.png","res/paint/tiger.png","res/paint/winter.png","res/paint/nap.png","res/paint/library.png","res/paint/space_rocket.png" 
	,"res/paint/fish.png","res/paint/bibimbab.png","res/paint/shoes.png","res/paint/duck.png","res/paint/mouse.png","res/paint/brush.png","res/paint/bean.png","res/paint/tomato.png","res/paint/pencilkeeper.png","res/paint/pumpkin.png" };
	int Question_NC[70] = { 1,1,2,3,2,3,1,2,2,1,
							3,2,1,3,2,2,3,1,2,3,
							2,1,2,3,1,1,2,3,2,1,
							1,2,3,1,2,3,2,2,3,1,
							3,1,2,3,2,1,2,3,2,1,
							1,1,3,2,3,3,2,2,2,1,
							1,1,2,3,2,1,2,3,3,1 };

	CString str;
	CString m_q;
	void RollTheQuestion();
	void IsThisCorrect(int btn_n);
	void MakeQuestion(int r);
	void GetProgress();
	
	CImage Q_i;

	CButton m_start;
};
