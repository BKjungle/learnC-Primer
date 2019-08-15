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
			cout << "tinajing  xinagsheng ", cout << "real !";// ¶ººÅÔËËã·û£¬ÏÈËã×ó²à£¬ÔÙËãÓÒ£¬·µ»ØÓÒ²à½á¹û
			cout << i << j << endl;

		}
			break;
		case 2:
		{
			
			int cout = 0;
			pair<string, int> strcnt;
			for (string strtmp, prestr ; cin >> strtmp && !strtmp.empty() ; prestr = strtmp)//ctrl + z stop
			{
				if (strtmp == prestr)
					++cout;
				else
					cout = 1;

				if (cout > strcnt.second)
					strcnt = { strtmp , cout};
			}
			if ( strcnt.first.empty() )
				std::cout << "There's no duplicated string" << endl;
			else 
				std::cout << "the word " << strcnt.first << "occurred " << strcnt.second << "times" << endl;
		}
			break;
		case 3://·¶Î§for	
		{
			
			vector<int> v = { 1,2,3,4,5,6,7 };
			for (auto& r : v)
			{
				r *= 2;
				cout << r << endl;
			}
		}
		break;
		default:
			cout << "in func:" << __FUNCTION__ << "line:"<< __LINE__<< endl;
			break;
		}
	}
};