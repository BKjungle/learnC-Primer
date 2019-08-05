#pragma once
#include "stdafx.h"


class ChapterThree
{
public:
	ChapterThree() {
		//------
		string s("some string");
		if (s.begin() != s.end())
		{
			auto it = s.begin();
			*it = toupper(*it);
		}

		cout << s << endl;
		//------
		for (auto it = s.begin(); it != s.end(); ++it)
		{
			*it = toupper(*it);
		}
		cout << s << endl;


		string::difference_type c = s.end() - s.begin() ;
		
		cout << " c = "  << c << " ,type = " << typeid(c).name() << endl;

		//========¶þ·Ö·¨
		vector<int> ss;
		int i = 20;
		while (i)
		{
			ss.push_back(i);
			--i;
		}
		for (auto it = ss.begin(); it != ss.end(); ++it)
			cout << *it << endl;

		cout << "====" << endl;

		auto beg = ss.begin();
		auto end = ss.end();	
		auto mid = ss.begin() + (end - beg) / 2;
		int sought = 11;
		while (mid != ss.end() && *mid != sought)
		{
			if (sought < *mid)
				beg = mid + 1;
			else
				end = mid;
				

			mid = beg + (end - beg) / 2;
			cout << "mid = " << mid - ss.begin() << endl; 
		}

		cout << " Get mid  = " << mid - ss.begin() << "*begin=" << *ss.begin() << ", *mid=" << *mid << endl;
	}

};
