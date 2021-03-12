// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>

// void menu() {
// 	printf("1.다이어리\n");
// 	printf("2.일정\n");
// 	printf("3.시간표\n");
// 	printf("4.날씨\n");
// 	printf("5.뉴스\n");
// 	printf("6.게임\n");
// 	printf("7.메세지\n");
// 	printf("8.오늘의 영단어\n");

// }

// void main() {
// 	int num = 8;
// 	//printf("%d\n", num);
// 	//printf("%p\n", &num);
// 	//printf("숫자를 입력하세요.\n");
	
	
// 	//printf("%p", &num); //포인트값을 찾는 것 printf ex) num에대한 포인트값.
// 	//printf("입력받은 값:%d", num);
// 	while (1){ //while시작
// 		menu();
// 		scanf("%d", &num); // 10진수
// 	if (num == 1) {
// 			printf("다이어리가 실행되었습니다.");
// 		}

// 		else if (num == 2) {
// 			printf("철수와 영희를 만나는 날입니다.");
// 		}

// 		else if (num == 3) {
// 			printf("오늘과 내일은 c언어와 파이썬 수업이 있습니다.");
// 		}

// 		else if (num == 4) {
// 			printf("다이어리가 실행되었습니다.");
// 		}

// 		else if (num == 5) {
// 			printf("오늘의 뉴스 속보입니다.");
// 		}

// 		else if (num == 6) {
// 			printf("게임을 실행합니다.");
// 		}

// 		else if (num == 7) {
// 			printf("오늘 도착한 메세지 입니다..");
// 		}

// 		else if (num == 8) {
// 			printf("today's english word is Computer.");
// 		}

// 		else if (num == 0) {
// 			printf("프로그램을 종료합니다..");
// 			break;
// 		}

// 		else
// 			printf("선택이 잘못 되었습니다.");

// 	}
// 	_getch();
// 	system("cls");
// };//while end

// #include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS

// int add(int a, int b) {
// 	return a + b;
// }

// int sub(int a, int b) {
// 	return a - b;
// }

// void main() {
// 		int a, b, operator;

	
// 	while (1) {
// 		printf("계산방법을 선택하세요\n");
// 		printf("1.덧셈\n");
// 		printf("2.뺏셈\n");
// 		printf("3.프로그램종료\n");
// 		scanf("%d", &operator);

// 		if (operator==1) {
// 			printf("대입할 두가지 수를 입력하세요\n");
// 			scanf("%d %d", &a, &b);
// 			printf("덧셈결과:%d\n", add(a, b));
// 		}

// 		else if (operator==2) {
// 			printf("대입할 두가지 수를 입력하세요\n");
// 			scanf("%d %d", &a, &b);
// 			printf("뺏셈결과:%d\n", sub(a, b));
// 		}

// 		else if (operator==3) {
// 			printf("프로그램을 종료합니다. 오늘 하루도 수고많으셨습니다.\n");
// 			break;
// 		}

// 		else {
// 			printf("연산자 선택이 올바르지 않습니다.\n");
// 		}
// 	}
	

// }


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int operator;

int menu() {
	int operator;
	//printf 를 사용하여 출력하는 구문을 만듦
	printf("-----------------\n");
	printf("기능을 선택하세요\n");
	printf("1. 일정\n");
	printf("2. 날씨\n");
	printf("3. 다이어리\n");
	printf("4. 게임\n");
	printf("5. 계산기\n");
	printf("6. 그동안 배운 기능 사용하기\n");
	printf("0. 종료\n");
	printf("-----------------\n");
	return 0;
	}


int nextpage(int operator)
{		scanf("%d", &operator); // 주소와 포인터, %d 정수형 표기
		
		if (operator==1) { printf(" 오늘 오후에 사장님과 미팅이 있습니다.\n  ");  return 0;		}
		if (operator==2) { printf(" 내일 날씨는 흐림입니다\n "); return 0;		}
		if (operator==3) { printf(" 오늘 적은 내용은 c언어에 대하여 배우기 입니다.\n"); return 0;		}
		if (operator==4) { printf(" 배틀그라운드\n리그 오브 레전드\n  "); return 0;		}
		if (operator==5) { printf(" 계산기를 실행합니다\n"); return 0;		}
		if (operator==6) { printf(" 그동안 배운 교육을 응용시작합니다.\n "); return 0;		}
		if (operator==0) { printf(" 프로그램을 종료합니다. \n"); exit(0); }
			else { printf("입력값이 다릅니다.\n"); }

		return 0;

		
}


	void main() {
		int operator;
		int state;

		while (1) 
		{

			operator = menu();
			state = nextpage(operator);
			
			if (state == 1) { break; }

			getch(); //get ch는 명령을이행하기전 상태를 유지합니다.
			system("cls"); // system("cls"); 는 명령어를 깔끔하게 만들어줍니다.
		
		}
		
			
		
	}
