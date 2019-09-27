#pragma once
#include "stdafx.h"
void double_and_insert(std::vector<int>& v, int some_val)
{

	auto mid = [&] { return v.begin() + v.size() / 2; };

	for (auto curr = v.begin(); curr != mid(); ++curr)
		if (*curr == some_val)
			++(curr = v.insert(curr, 2 * some_val));

}	

class fc {
public:
	template<typename T>
	fc(T& arg) {
		for (auto& ar : arg) {
			cout << ar << "\n";
		}
	}
};

class ChapterNine
{
public:
	ChapterNine(int a)
	{
		switch (a)
		{
		case 1:
		{
			vector<int> v1;
			const vector<int> v2;
			auto it1 = v1.begin();
			auto it2 = v2.begin();
			auto it3 = v1.cbegin();
			auto it4 = v2.cbegin();

			cout << " it1.type=" << typeid(it1).name() << endl;
			cout << " it2.type=" << typeid(it2).name() << endl;
			cout << " it3.type=" << typeid(it3).name() << endl;
			cout << " it4.type=" << typeid(it4).name() << endl;


			//

			deque<int> vd1{1, 2, 3};
			deque<int> vd2{4, 5, 6};
			deque<int>::iterator itd1 = vd1.begin();
			itd1++;
			cout << "itd1=" << *itd1 << "-" << endl;
			//vd1 = vd2;//赋值后 itd1 迭代器已失效
			cout << "itd1=" << *itd1 << "-" << endl;
			//
			vd1.insert(vd1.begin(), 10, 7);
			for (const auto& a : vd1)
				cout << a << "-s"<< endl;
			cout << vd1[10] << endl;
		}	
			break;
		case 2: {
			list< const char*> tl;
			tl = { "1", "2", "3", "4" };
			vector<string> tv{"q","w","e","r"};
			tv.assign(tl.begin(), tl.end());
			for (auto& str : tv)
				cout << "tv-" << str << "\n";
		}

			break;
		case 3:
		{
			std::vector<int> v{ 6, 9, 3, 9, 9, 9, 3, 1 ,4,5,6,7};

			double_and_insert(v, 1);

			for (auto i : v)
				std::cout << i << std::endl;
		}
		
			break;
		case 4:
		{
			vector<int> val;
			//try {
			int& rf0 = val.at(0);
			int& rf1 = val[0];
			int& rf2 = *val.begin();
			int& rf3 = val.front();

			//}
		//	catch(out_of_range){
			cout << "val.at is out_of_range";

			//	}

		}break;
		case 5:
		{
			vector<int> val{ 1,2,3,4,5,6,7,8,9 };
			cout << *val.begin() << endl;
			auto iter = val.erase(val.begin(), val.end());
			if (iter == val.end())
				cout << "---size" << val.size() << endl;
			//cout << *iter;
		}break;
		case 6: {
		
			int a[10] = { 1,2,3,4,5,6,7,8,9 };
			vector<int> val(a,end(a));
			list<int> lal(val.begin(),val.end());
			int si = sizeof(a)/sizeof(int);
			cout << "size of a=" << si << endl;
		/*	for (int i = 0; i < si;  i++) {
				val.push_back(a[i]);
				lal.push_back(a[i]);
			}*/
			
			fc::fc(val);
			fc::fc(lal);
			cout << "=================================";
				auto iter = val.begin();
				for (; iter != val.end();  )
				{
					if (*iter & 0x1)
						++iter;
					else
						iter = val.erase(iter);

				}
				auto liter = lal.begin();
				for (; liter != lal.end(); )
				{
					if (*liter & 0x1)
						liter = lal.erase(liter);
					else
						++liter;
						

				}

				fc::fc(val);
				fc::fc(lal);
		}
				break;
		case 7 :
		{
			forward_list<int> vaf;
			vaf.insert_after(vaf.before_begin(), {1,2,4});
			fc::fc(vaf);
		}
		break;
		default:
			;
		}
	}
};


