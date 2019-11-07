#pragma once
#include "stdafx.h"
#include <numeric>
#include <iterator>
#include <functional>

bool isBiger(const int& a, const int& b)
{
	return a > b;
}


int is_shorter(std::string const& lhs, std::string const& rhs)
{
	return  lhs.size() < rhs.size();
}

bool isEvenNumber(const int& a, int dv) 
{
	if (0 != dv)
		return (0 == a % dv);

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
			cout << "Cret = " << Cret << v1.begin()._Unwrapped() << endl;
			cout << "v1 accumulate = " << accumulate(v1.cbegin(), v1.cend(), 0) << endl;

			vector<double> v2 = { 1.2,2.3,3.4,4.5,5.66 };
			cout << "v2 accumulate = " << accumulate(v1.cbegin(), v1.cend(), 0) << endl;

			auto itr = back_inserter(v2);
			fill_n(itr, 7, 7);
			pr<vector<double>>(v2, 0);

			vector<int> v3;


		}break;
		case 2:
			//{
			//
			//	//sort(v1.begin(), v1.end(), isBiger);// 二元谓词
			//	auto it = partition(v1.begin(), v1.end(), isEvenNumber);//一元谓词	 isEvenNumber true  put on pre, false put on tail
			//	cout << it - v1.begin() << endl;
			//	pr(v1, 1);

			//	//---
			//	
			//	elimdups(v);
			//	pr(v, 1);
			//	sort(v.begin(), v.end(), is_shorter);
			//	std::cout << "ex10.11 :\n";
			//	pr(v, 1);
			//}break;
		case 3://lambda
		{
			int count = 5;
			class show a;
			auto f = [a](const string& str) -> int {  return 1;/* str.size() > count;*/ };
			auto f1 = f;
			cout << typeid(f).name() << endl;

			auto it = find_if(v.begin(), v.end(), f1);//f1在内部 被做右值初始化新变量 
			cout << *it << "and index = " << it - v.begin() << endl;

		}break;
		case 4:
		{
			auto  isEvenNum = bind(isEvenNumber, std::placeholders::_1, 2);
			auto ite = find_if(v1.begin(), v1.end(), isEvenNum);
			cout << "first EventNum is " << *ite << endl;
			auto it = partition(v1.begin(), v1.end(), isEvenNum);//一元谓词	 isEvenNumber true  put on pre, false put on tail
			cout << it - v1.begin() << endl;
			pr(v1, 1);
		}break;
		case 5:
		{
			std::ifstream  ifs("./nnn.txt");
			std::istream_iterator<string> itfs(ifs), eof;
			vector<string> vstr;
			copy(itfs, eof, back_inserter(vstr));
			pr(vstr, 1);
			getchar();
		}break;
		case 6:
		{
			std::vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			std::list<int> ret_lst(8 - 3);
			std::copy(vec.cbegin() + 3, vec.cbegin() + 8, ret_lst.rbegin());
			pr(ret_lst, 1);
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

private:
	std::vector<std::string> v{ "1234", "1234", "1234", "Hi", "wlan", "aang" };
	vector<int> v1 = { 1,3,5,7,2,4,6,3,2,5,6,9,5,32,4,6,7 };
};
