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

			map<string, string>::value_type mele = *m1.begin();
			string() = mele.first;

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
		//	cout << li.end() - li.begin() << endl; // ----------------error , list iterator is nodefine operator  "-"
			m1.find("");


			break;
		}
		case 2:// pair对组
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

		}break;
		case 3:
		{
			//set 
			set<int> s1;
			s1.insert({1,2,4,5});
			s1.emplace(3);
			map<int, int> mp{ {2,2},{5,6} };
			map<int, int> mo; mo.insert({ 1,3 });
			auto mv = mo[2];// 会默认添加元素
			cout << "=="<< mv  << "==mv.size="<< mo.size()<< "==mp.size()=" << mp.size()<< endl;

			cout << s1.size() << endl;

			map<string,string> t1;
			try {
				t1.at("nihao");
			}
			catch (out_of_range) {
				cout << "out_of_range 'nihao' in t1" << endl;
			}
				







		}

		default:
			break;
		}
	}
};
