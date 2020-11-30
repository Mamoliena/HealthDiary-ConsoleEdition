#include"general.h"

void write(void)
/*
txtファイルへの書き込みメソッド。
体温の入力をする。
*/
{
	int a;
	int count = 0;
	
	char temp[10];
	char next[2] = { '\n','\0' };
	
	FILE  *fp;
	errno_t error;

	error = fopen_s(&fp, "temp.txt", "a");
	system("cls");
	START_LABEL;
	printf(" __________________\n｜ 体温を記録する ｜\n｜　　　　　　　  ┗―――――\n");
	
	if (error != 0) {
		printf("｜書き込み用のファイルを開けません。\nプログラムを再起動して下さい。");
		BADEND_LABEL;
		MENU_FLAG = true;
		WRITE_FLAG = false;
	}
	else {
		while ((a = fgetc(fp)) != EOF) { putchar(a); }

		printf("｜体温を入力してください(小数点第一位まで)\n｜[ ");
		fgets(temp, sizeof(temp), stdin);		

		fprintf(fp, "%4d/%2d/%2d;%s", get_date(0), get_date(1), get_date(2), temp);
		fclose(fp);

		printf("┗――――――――――――――\n");

		MENU_FLAG  = true;
		WRITE_FLAG = false;
	}
}