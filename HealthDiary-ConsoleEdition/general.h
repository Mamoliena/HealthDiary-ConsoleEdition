/*
<HealthDiary>
�������`������A�C���N���[�h�����肷��̂��ʓ|�������̂�
�w�b�_�[�t�@�C���ɂ܂Ƃ߂��B
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
					 printf("�\�\�\�\�\�\�b  �� HealthDiary �� �b�\�\�\�\�\�\\n");\
					 printf("            �b  %4d�N %2d�� %2d��  �b\n ",get_date(0), get_date(1), get_date(2));\
					 printf("            �P�P�P�P�P�P�P�P�P�P�P\n");
#define END_LABEL    printf("\n\n�\�\�\�\�\�\�� �v���O��������I�� ���\�\�\�\�\�\\n");
#define BADEND_LABEL printf("\n\nXXXXXXXXXXXX�� �v���O�����ُ�I�� ��XXXXXXXXXXXX\n");

extern bool WRITE_FLAG;  //���͉��
extern bool EXIT_FLAG;   //�I������
extern bool MENU_FLAG;   //�I�����