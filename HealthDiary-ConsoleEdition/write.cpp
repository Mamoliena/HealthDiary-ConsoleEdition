#include"general.h"

void write(void)
/*
txt�t�@�C���ւ̏������݃��\�b�h�B
�̉��̓��͂�����B
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
	printf(" __________________\n�b �̉����L�^���� �b\n�b�@�@�@�@�@�@�@  ���\�\�\�\�\\n");
	
	if (error != 0) {
		printf("�b�������ݗp�̃t�@�C�����J���܂���B\n�v���O�������ċN�����ĉ������B");
		BADEND_LABEL;
		MENU_FLAG = true;
		WRITE_FLAG = false;
	}
	else {
		while ((a = fgetc(fp)) != EOF) { putchar(a); }

		printf("�b�̉�����͂��Ă�������(�����_���ʂ܂�)\n�b[ ");
		fgets(temp, sizeof(temp), stdin);		

		fprintf(fp, "%4d/%2d/%2d;%s", get_date(0), get_date(1), get_date(2), temp);
		fclose(fp);

		printf("���\�\�\�\�\�\�\�\�\�\�\�\�\�\\n");

		MENU_FLAG  = true;
		WRITE_FLAG = false;
	}
}