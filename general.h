/*
<HealthDiary>
何回も定義したり、インクルードしたりするのが面倒くさいので
ヘッダーファイルにまとめた。
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include<string>

int get_date(int);

#define START_LABEL  printf("\n");\
					 printf("             ______________________\n");\
					 printf("――――――｜  ＜ HealthDiary ＞ ｜――――――\n");\
					 printf("            ｜  %4d年 %2d月 %2d日  ｜\n ",get_date(0), get_date(1), get_date(2));\
					 printf("            ￣￣￣￣￣￣￣￣￣￣￣\n");
#define END_LABEL    printf("\n\n――――――＜ プログラム正常終了 ＞――――――\n");
#define BADEND_LABEL printf("\n\nXXXXXXXXXXXX＜ プログラム異常終了 ＞XXXXXXXXXXXX\n");

extern bool WRITE_FLAG;  //入力画面
extern bool EXIT_FLAG;   //終了処理
extern bool MENU_FLAG;   //選択画面