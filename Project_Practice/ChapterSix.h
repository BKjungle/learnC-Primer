#pragma once
#include "stdafx.h"
#include "stdarg.h"
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
			any_capital(string("fjsfksSsfksj"));
		}
		break;
		case 3: // 省略符 
		{
			ArgFunc("argu1","sfs",3,4.0);
			vector<int>  vf = { 1,2,3,4,5,6,7 };
			printV(0,vf);

			typedef string(&arrType)[10];
			arrType func(arrType a);

			string (&func(int a))[10];//
			auto func(arrType a) -> string (&)[10];

		

			string a[10];
			decltype(a)& func(arrType a);
		}
		break;
		default:
			break;
		}
	}
	void printV(size_t index, vector<int> & rf) {
		if (index == rf.size() - 1)
			cout << rf[index];
		else {
			cout << rf[index] << endl;
			printV(index+1, rf);
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
		//str[2] = 's';
		for (auto ch : str)

			if (isupper(ch)) return true;

		return false;

	}

	void ArgFunc(const char* str, ...)
	{
		char* s = NULL;
		int second = 0;
		double  three = 0.0;

		va_list ap;
		va_start(ap, str);
		s = va_arg(ap, char*);
		second = va_arg(ap, int);
		three = va_arg(ap, double);

		cout << str<< s << second << three << endl;
	}


	// 重载
	void  cz(int& tt)
	{
		cout << tt << endl;
	}
	void cz(const int& tt) {
		cout << tt << endl;
	}

};