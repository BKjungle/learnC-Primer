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
			m1.insert(make_pair<string, string>("1", "1"));
			m1.insert(make_pair<string, string>("3", "3"));
			m1.insert(make_pair<string, string>("2", "2"));

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
			li.push_back(2);
			li.push_back(3);

		//	ml.insert(std::pair<std::list<int>::iterator, int>(li.begin(), 8));
		//	cout << ml[li.begin()] << endl;
		//	cout << li.end() - li.begin() << endl; // error , list iterator is nodefine oper  "-"
			m1.find("");
			break;
		}
		case 2:
		{
			std::vector<std::pair<std::string, int>> vec;
			std::string str;
			int i;
			while (std::cin >> str >> i) {
				//vec.push_back(std::pair<std::string, int>(str, i));
			//vec.push_back(std::make_pair(str, i));
			//vec.push_back({ str, i });
				vec.emplace_back(str, i); //!! easiest way.
			}
			for (const auto& p : vec)
				std::cout << p.first << ":" << p.second << std::endl;

		}

		default:
			break;
		}
	}
};
