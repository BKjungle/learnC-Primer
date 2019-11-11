#pragma once
#include "stdafx.h"
#include <map>
#include <set>
using namespace std;

class ASS
{
public:
	ASS(int a)
	{
		switch (a)
		{
		case 1:
		{
			map<string, string> m1;
			m1.insert(make_pair<string, string>("1", "2"));
			m1.insert(make_pair<string, string>("3", "3"));
			m1.insert(make_pair<string, string>("2", "3"));

			//m1["1"] = "3";
			cout << m1.size() << endl;
			for (auto& a : m1)
			{
				cout << "first:"<< a.first  <<  " sec=" << a.second << endl;
			}

			//===key - value type
			std::map<std::vector<int>::iterator, int> mv;
			std::map<std::list<int>::iterator, int> ml;
			std::vector<int> vi;
			mv.insert(std::pair<std::vector<int>::iterator, int>(vi.begin(), 9));
			cout << mv[vi.begin()] << endl;

			//but list err
			std::list<int> li;
			ml.insert(std::pair<std::list<int>::iterator, int>(li.begin(), 8));
			cout << ml[li.begin()] << endl;

		

			break;
		}

		default:
			break;
		}
	}
};
