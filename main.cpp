/*
<HealthDiary>
�S�̂̃t���O���Ǘ����āA�t���O�̐؂�ւ�育�ƂɃ��\�b�h�̋N��������B
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

bool MENU_FLAG = true;    //�I�����
bool WRITE_FLAG = false;  //���͉��
bool EXIT_FLAG = false;   //�I������
bool START_FLAG = false;  //���Ԃ�\���������ǂ����̃t���O

#define START_LABEL  if(START_FLAG==false){\
						printf("\n");\
						printf("             ______________________\n");\
						printf("�\�\�\�\�\�\�b  �� HealthDiary �� �b�\�\�\�\�\�\\n");\
						printf("            �b  %4d�N %2d�� %2d��  �b\n ",get_date(0), get_date(1), get_date(2));\
						printf("            �P�P�P�P�P�P�P�P�P�P�P\n");\
						START_FLAG=true;\
					 }
#define END_LABEL    printf("\n\n�\�\�\�\�\�\�� �v���O��������I�� ���\�\�\�\�\�\\n");
#define BADEND_LABEL printf("\n\nXXXXXXXXXXXX�� �v���O�����ُ�I�� ��XXXXXXXXXXXX\n");

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
