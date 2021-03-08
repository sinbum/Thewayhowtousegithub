#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("1.다이어리\n");
	printf("2.일정\n");
	printf("3.시간표\n");
	printf("4.날씨\n");
	printf("5.뉴스\n");
	printf("6.게임\n");
	printf("7.메세지\n");
	printf("8.오늘의 영단어\n");

}

void main() {
	int num = 8;
	//printf("%d\n", num);
	//printf("%p\n", &num);
	//printf("숫자를 입력하세요.\n");
	
	
	//printf("%p", &num); //포인트값을 찾는 것 printf ex) num에대한 포인트값.
	//printf("입력받은 값:%d", num);
	while (1){ //while시작
		menu();
		scanf("%d", &num); // 10진수
	if (num == 1) {
			printf("다이어리가 실행되었습니다.");
		}

		else if (num == 2) {
			printf("철수와 영희를 만나는 날입니다.");
		}

		else if (num == 3) {
			printf("오늘과 내일은 c언어와 파이썬 수업이 있습니다.");
		}

		else if (num == 4) {
			printf("다이어리가 실행되었습니다.");
		}

		else if (num == 5) {
			printf("오늘의 뉴스 속보입니다.");
		}

		else if (num == 6) {
			printf("게임을 실행합니다.");
		}

		else if (num == 7) {
			printf("오늘 도착한 메세지 입니다..");
		}

		else if (num == 8) {
			printf("today's english word is Computer.");
		}

		else if (num == 0) {
			printf("프로그램을 종료합니다..");
			break;
		}

		else
			printf("선택이 잘못 되었습니다.");

	}
	_getch();
	system("cls");
};//while end