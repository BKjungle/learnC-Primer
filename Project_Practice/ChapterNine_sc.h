#pragma once
#include "stdafx.h"


class ChapterNine
{
public:
	ChapterNine(int a)
	{
		switch (a)
		{
		case 1:
		{
			vector<int> v1;
			const vector<int> v2;
			auto it1 = v1.begin();
			auto it2 = v2.begin();
			auto it3 = v1.cbegin();
			auto it4 = v2.cbegin();

			cout << " it1.type=" << typeid(it1).name() << endl;
			cout << " it2.type=" << typeid(it2).name() << endl;
			cout << " it3.type=" << typeid(it3).name() << endl;
			cout << " it4.type=" << typeid(it4).name() << endl;


			//

			deque<int> vd1{1, 2, 3};
			deque<int> vd2{4, 5, 6};
			deque<int>::iterator itd1 = vd1.begin();
			itd1++;
			cout << "itd1=" << *itd1 << "-" << endl;
			//vd1 = vd2;//赋值后 itd1 迭代器已失效
			cout << "itd1=" << *itd1 << "-" << endl;
			//
			vd1.insert(vd1.begin(), 10, 7);
			for (const auto& a : vd1)
				cout << a << "-s"<< endl;
			cout << vd1[10] << endl;
		}	
			break;
		case 2: {
			list< const char*> tl;
			tl = { "1", "2", "3", "4" };
			vector<string> tv{"q","w","e","r"};
			tv.assign(tl.begin(), tl.end());
			for (auto& str : tv)
				cout << "tv-" << str << "\n";
		}

			break;
		default:
			;
		}
	}
};