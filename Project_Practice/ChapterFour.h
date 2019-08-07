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
		default:
			;
		}
	}
};
