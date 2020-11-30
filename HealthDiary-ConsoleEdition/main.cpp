/*
<HealthDiary>
全体のフラグを管理して、フラグの切り替わりごとにメソッドの起動をする。
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

bool MENU_FLAG = true;    //選択画面
bool WRITE_FLAG = false;  //入力画面
bool EXIT_FLAG = false;   //終了処理
bool START_FLAG = false;  //時間を表示したかどうかのフラグ

#define START_LABEL  if(START_FLAG==false){\
						printf("\n");\
						printf("             ______________________\n");\
						printf("――――――｜  ＜ HealthDiary ＞ ｜――――――\n");\
						printf("            ｜  %4d年 %2d月 %2d日  ｜\n ",get_date(0), get_date(1), get_date(2));\
						printf("            ￣￣￣￣￣￣￣￣￣￣￣\n");\
						START_FLAG=true;\
					 }
#define END_LABEL    printf("\n\n――――――＜ プログラム正常終了 ＞――――――\n");
#define BADEND_LABEL printf("\n\nXXXXXXXXXXXX＜ プログラム異常終了 ＞XXXXXXXXXXXX\n");

void menu(void);
void write(void);
int get_date(int);

int main(void) {
	while (true) {
		START_LABEL;

		if (MENU_FLAG == true) {
			menu();
		}
		
		if (WRITE_FLAG == true) {
			write();
		}
		
		if (EXIT_FLAG == true) {
			END_LABEL;
			break;
		}
	}
	return 0;
}
