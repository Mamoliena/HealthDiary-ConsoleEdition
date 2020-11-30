#include"general.h"

void menu(void)
/*
メニュー画面の項目選択を制御する。
上下キーで選択し、エンターキーで決定する。
*/
{
	int  i = 0;
	int  count = 0;
	int  menu_str_end = 0;
	char menu_str[5][25] = { "－体温を記録する","－プログラムを終了" };
	
	printf(" __________________\n｜ メインメニュー ｜\n｜　　　　　　　  ┗―――――\n");
	while (menu_str[count][0] != '\0') {
		printf("｜%d%s", count + 1, menu_str[count]);

		for (i = 0; menu_str[count][i] != '\0'; i++);
		for (int j = 26 - i; j > 0; j--) { printf(" "); }

		printf("｜\n");

		count++;
	}
	printf("┗――――――――――――――\n\n");

	menu_str_end = count;
	count = 0;

	while (MENU_FLAG == true) {
		printf("\r               　　　　          \r＞%d%s", count + 1, menu_str[count]);

		switch (_getch()) {//キーボード入力待ち
		case 72: {//上	72
			if (count - 1 >= 0) { count--; }
			break;
		}
		case 80: {//下	80
			if (count + 1 <= menu_str_end - 1) { count++; }
			break;
		}
		case 13: {//Enter 13
			switch (count)
			{
			case 0: { WRITE_FLAG  = true; break; }
			case 1: { EXIT_FLAG   = true; break; }
			}
			MENU_FLAG = false;
		}
		}
	}
}