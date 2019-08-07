#pragma once
#include "stdafx.h"


class ChapterFour
{
public:
	ChapterFour(int a) {

		switch (a)
		{
		case 1:
		{
			int i = 0;
			unsigned short short_value = 1;
			short_value |= 0xFFFF;
			cout << i << "-" << ++i << "value="<< short_value<< endl;//
		}
			break;
		case 2://算数
		{
			int r = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
			cout << "r = " << r <<endl;
			if (r & 0x1) {
				cout << "奇数" << endl;
			}
			if (r == true) {//true ，false 做运算对象时候为 1，0	
				cout << "r = 1" << endl;
			}
		}
			break;
		case 3://逻辑
		{

		}
		break;
		case 5:
		{
			int i; double d;
			d = i = 3.5; cout << d << "-" << i << endl;
			i = d = 3.5;  cout << d << "-" << i << endl;
		}
		break;
		default:
			;
		}
	}
};
