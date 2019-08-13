#pragma once
#include "stdafx.h"


class ChapterFour
{
public:
	ChapterFour(int a) {

		switch (a)
		{
		case 1:
		{
			int i = 0;
			unsigned short short_value = 1;
			short_value |= 0xFFFF;
			cout << i << "-" << ++i << "value="<< short_value<< endl;//
		}
			break;
		case 2://算数
		{
			int r = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
			cout << "r = " << r <<endl;
			if (r & 0x1) {
				cout << "奇数" << endl;
			}
			if (r == true) {//true ，false 做运算对象时候为 1，0	
				cout << "r = 1" << endl;
			}
		}
			break;
		case 3://逻辑
		{

		}
		break;
		case 5:
		{
			int i; double d;
			d = i = 3.5; cout << d << "-" << i << endl;
			i = d = 3.5;  cout << d << "-" << i << endl;
		}
		break;
		case 8:
		{
			unsigned long  quiz1 = 0,*p;
			quiz1 |= 1UL << 27;
			cout << sizeof('0')<< sizeof *p << endl;
			unsigned char q = 0161;
			cout << (~q << 6) << endl;
			int* pint = 0;
			cout << "in vs2019 ,the pointer`size of int =  " <<sizeof( pint) << endl;
			cout << " int size= " << sizeof (int) << endl;
			cout << " unsigned long  size = " << sizeof(unsigned long) << endl;

		}
		break;
		case  11:// type 转换
		{
			auto ret = 3.05 + 3;  
			cout << typeid(ret).name() << endl;
				
			const char* cp = "static_cast--> string";
			string str = static_cast<string>(cp);
			cout << str << endl;
			//------
			int i = -57; double d = 3.1;
			i = static_cast<int>(d) * i;
			cout << i << endl;
			//------
			int n = 1;
			n |= 0x1;
			cout << "n = " << n << endl;
			n <<= 8;
			cout << "n = " << n << endl;
			char* pc = reinterpret_cast<char*>(&n);
			
			cout << *(pc+1) +0 << endl;

		}
		break;
		default:
			;
		}
	}
};
