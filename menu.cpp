#include"general.h"

void menu(void)
/*
���j���[��ʂ̍��ڑI���𐧌䂷��B
�㉺�L�[�őI�����A�G���^�[�L�[�Ō��肷��B
*/
{
	int  i = 0;
	int  count = 0;
	int  menu_str_end = 0;
	char menu_str[5][25] = { "�|�̉����L�^����","�|�v���O�������I��" };
	
	printf(" __________________\n�b ���C�����j���[ �b\n�b�@�@�@�@�@�@�@  ���\�\�\�\�\\n");
	while (menu_str[count][0] != '\0') {
		printf("�b%d%s", count + 1, menu_str[count]);

		for (i = 0; menu_str[count][i] != '\0'; i++);
		for (int j = 26 - i; j > 0; j--) { printf(" "); }

		printf("�b\n");

		count++;
	}
	printf("���\�\�\�\�\�\�\�\�\�\�\�\�\�\\n\n");

	menu_str_end = count;
	count = 0;

	while (MENU_FLAG == true) {
		printf("\r               �@�@�@�@          \r��%d%s", count + 1, menu_str[count]);

		switch (_getch()) {//�L�[�{�[�h���͑҂�
		case 72: {//��	72
			if (count - 1 >= 0) { count--; }
			break;
		}
		case 80: {//��	80
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