#include"general.h"

int get_date(int type)
/*
現在時間を取得し、戻り値として返す関数。
引数に返す単位を指定する( 0->年 , 1->月 , 2->日 )
*/
{
	time_t timer;
	struct tm local_time;
	timer = time(NULL);
	localtime_s(&local_time, &timer);
	
	switch (type){//typeごとに戻り値を設定
	case 0:  { return local_time.tm_year + 1900; }
	case 1:  { return local_time.tm_mon + 1; }
	case 2:  { return local_time.tm_mday; }
	default: { return 0; }
	}
}