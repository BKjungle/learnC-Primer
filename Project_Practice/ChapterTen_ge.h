#pragma once
#include "stdafx.h"
bool isBiger(const int& a, const int& b)
{
	return a > b;
}


int is_shorter(std::string const& lhs, std::string const& rhs)
{
	return  lhs.size() < rhs.size();
}

bool isEvenNumber(const int& a) 
{
	return (0 == a % 2);
}
int cc = 0;

class show
{
public:
	show() {
		cout << "in show  " << endl;
	}
	show(const show& tmp) {
		cout << "copy construct ;cc= " << cc << endl;
		cc += 1;
	}
	void operator =(show& tmp) {
		cout << " = construct" << endl;
	}
	void operator()(show& tmp) {
		cout << " fuzhi ?" << endl;
	}
};
class Genetic
{
public:
	Genetic(int a)
	{
		
	


		 switch (a)
		{
		case 1:
		{
			vector<int> v1 = { 1,2,3,4,5 };
			auto ret = find(begin(v1), end(v1), 4);
			cout << "ret = " << *ret << endl;

			auto Cret = count(begin(v1), end(v1), 5);
			cout << "Cret = " << Cret  << v1.begin()._Unwrapped() << endl;
		}break;
		case 2:
		{
			vector<int> v1 = { 2,4,6,3,2,5,6,9,5,32,4,6,7 };

			//sort(v1.begin(), v1.end(), isBiger);// 二元谓词
			auto it = partition(v1.begin(), v1.end(), isEvenNumber);//一元谓词	 isEvenNumber true  put on pre, false put on tail
			cout << it - v1.begin() << endl;
			pr(v1, 1);

			//---
			std::vector<std::string> v{ "1234", "1234", "1234", "Hi", "wlan", "aang" };
			elimdups(v);
			pr(v, 1);
			sort(v.begin(), v.end(), is_shorter);
			std::cout << "ex10.11 :\n";
			pr(v, 1);
		}break;
		case 3://lambda
		{
			int count = 5;
			class show a;
			auto f = [a](const string& str) -> int {  return 1;/* str.size() > count;*/ };
			auto f1 = f;
			cout << typeid(f).name() << endl;
			std::vector<std::string> v{ "1234", "12345", "1234", "Hi", "wlan44", "aang" };
			auto it = find_if(v.begin(), v.end(), f1);//f1在内部 被做右值初始化新变量 
			cout << *it << "and index = " << it - v.begin() << endl;

		}
		default:
			break;
		}
	}
	//====
	void elimdups(std::vector<std::string> &vs)
	{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
	}


};
