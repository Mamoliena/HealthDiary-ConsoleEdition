#include"general.h"

int get_date(int type)
/*
���ݎ��Ԃ��擾���A�߂�l�Ƃ��ĕԂ��֐��B
�����ɕԂ��P�ʂ��w�肷��( 0->�N , 1->�� , 2->�� )
*/
{
	time_t timer;
	struct tm local_time;
	timer = time(NULL);
	localtime_s(&local_time, &timer);
	
	switch (type){//type���Ƃɖ߂�l��ݒ�
	case 0:  { return local_time.tm_year + 1900; }
	case 1:  { return local_time.tm_mon + 1; }
	case 2:  { return local_time.tm_mday; }
	default: { return 0; }
	}
}