#pragma once
#include "stdafx.h"


class ChapterFive
{
public:
	ChapterFive(int a) {
		switch (a)
		{
		case 1:
		{
			int i ,j ;
			i = j = 3;
			cout << "tinajing  xinagsheng ", cout << "real !";// �����������������࣬�����ң������Ҳ���
			cout << i << j << endl;

		}
			break;
		case 2:
		{
			
		}
			break;
		default:
			cout << "in func:" << __FUNCTION__ << "line:"<< __LINE__<< endl;
			break;
		}
	}
};