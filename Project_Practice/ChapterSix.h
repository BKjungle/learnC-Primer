#pragma once
#include "stdafx.h"

class ChapterSix
{
public:
	ChapterSix(int a ) {
		switch (a)
		{
		case 1: {

			const int b[9] = {0};
			cout << std::boolalpha << any_capital(string("fjsfksSsfksj")) << endl;
			print(b);
			
			int ar[3] = { 1,2,3};
			printR(ar);// 匹配类型 
			// 多维
			int mul[2][3] = { 1,2,3,4,5,6 };
			printE(mul);
		}
				break;
		case 2: // initializer_list 
		{
			string s0("initializer_list");
			string s1("info1");
			string s2("info2");
			err_msg({s0,s1,s2});

		}
		break;
		case 3: // 省略符 
		{

		}
		break;
		default:
			break;
		}
	}

	void err_msg(initializer_list<string> strl) {
		for (auto i = strl.begin(); i != strl.end(); ++i) {
			if ("info1" == *i) {
				//*i = "info1_";  // err  initializer element is const 
			}
			cout << *i << endl;
		}
	}

	void print(const int a[10]) {// a 的类型等价于 const int *
		//a[3] = 2;  //err
		cout << "const int[10]:" << a << endl;
	}
	void printE(int(*e)[3]) { // e 真正的数组类型

	}

	void printR(const int(&arr)[3]) {
		//arr[2] = 3;//
		cout << " arr[2] = " << arr[2] << endl;
	}

	bool any_capital( string const& str)

	{
		// str[2] = 's';
		for (auto ch : str)

			if (isupper(ch)) return true;

		return false;

	}
};