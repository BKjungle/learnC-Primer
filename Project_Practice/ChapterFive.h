#pragma once
#include "stdafx.h"
//#include <stdexpect>

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
		case 3://��Χfor	
		{
			
			vector<int> v = { 1,2,3,4,5,6,7 };
			for (auto& r : v)
			{
				r *= 2;
				cout << r << endl;
			}
		}
		break;
		case 4://�쳣 
		{
			int  m1, m2;
			while (cin >> m1 >> m2) 
			{
				try{
					if (0 == m2) {
						throw range_error(" Divident is not correct\n");//�׳�����
					}
				}
				catch (range_error err) {
					cout << err.what()
						<< " please check you input "
						<< " Try again? Enter y or n " << endl;
					char input;
					cin >> input;
						if ('y' == input)
							continue;
						else
							break;
				}
				break;			
			
			};
				


		}
		default:
			cout << "in func:" << __FUNCTION__ << "line:"<< __LINE__<< endl;
			break;
		}
	}
};