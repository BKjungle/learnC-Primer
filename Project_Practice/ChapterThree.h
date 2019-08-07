#pragma once
#include "stdafx.h"


class ChapterThree
{
public:
	ChapterThree(int a){
		//------
		switch(a)
		{
			case 1:
			{
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


				string::difference_type c = s.end() - s.begin();

				cout << " c = " << c << " ,type = " << typeid(c).name() << endl;
			}
			break;
		case 2://========迭代器二分法
				
			{
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
				break;
			}
		case 3:// ======array
			{
				//	定义赋值 
				
				int num[5 * 7 - 14] = {0};
				char str[] = {'c','+','+','\0'};
				cout << "char array strlen = " << strlen(str) << ",sizeof() = "<< sizeof(str)<< endl;

				// 复杂声明
				int* ptrs[10] = {0};
				int* (*Parry)[10] = &ptrs;
				int* (&Rarry)[10] = ptrs;

				cout << "ptrs[0] = " << (*Parry)[0] << ",ptrs="<< ptrs[0]<< endl;
				cout << "ptrs[2] = " << Rarry[2] << endl;

				// C++ 11 引进begin & end 函数取数组 首和尾后元素指针
				int** bptrs = begin(ptrs);  // == ptrs[0]
				int** eptrs = end(ptrs); // == ptrs[10]

				// 指针 解引用、比较、与整数或其他指针的加减 等同于迭代器
				ptrdiff_t n = eptrs - bptrs; // ptrdiff_t 有符号
				int a[5] = {  };
				int* p = &a[5];//尾后元素
				int t = p[-1]; //  -1 表示p 位置向前一个位移的元素，即a[4]

				// 类型声明
				int (arr1)[3];
				using  arr2 = int[3];
				typedef int arr3[3];

				cout << "arr1 type=" << typeid(arr1).name() << endl;
				cout << "arr2 type=" << typeid(arr2).name() << endl;
				cout << "arr3 type=" << typeid(arr3).name() << endl;

				arr1[1] = 1;
				cout << arr1[1] << endl;


			}
			break;


		default:
			;
		}

	}

};
