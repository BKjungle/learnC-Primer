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
			m1.insert(make_pair<string, string>("1", "3"));
			//m1["1"] = "3";
			cout << m1.size() << endl;
			for (auto& a : m1)
			{
				cout << "first:"<< a.first  <<  " sec=" << a.second << endl;
			}
		

			break;
		}

		default:
			break;
		}
	}
};
