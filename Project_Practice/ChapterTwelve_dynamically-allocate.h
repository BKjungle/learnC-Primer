#pragma once
#include <iostream>
#include <memory>
#include <set>
#include <fstream>
#include <string>
#include <map>
using namespace std;

class A
{
public:
	A(int a) {
		m_a = a;
		cout << "in con " << m_a << endl;
	}

	A(const A& para) {
		cout << " in copy func" << para.get() << endl;
		m_a = para.get();
	}
	int get()const
	{
		return m_a;
	}
	bool operator<( A& param) {
		return this->get() < param.get();
	}
	~A(){
		cout << "in A disconstruct " << m_a << endl;
	}
	int m_a;
};

A func(int a) {
	shared_ptr<A> sh_a(new A(a));
	return *sh_a;
}
auto f = [](int a) { int b = a; };






class Dynamic
{
public:

	Dynamic(int a)
	{
		switch (a)
		{
			case 1:
			{
				/*shared_ptr<A> spA = make_shared<A>(2);
				cout <<"spA.get = " <<  spA.get() << endl;

				A a(3);
				A b(4);
				cout << (a < b) << endl;*/

				 vector<A> sA;
				 A  a(4);

				sA.push_back(a);
				cout << "666" << endl;

				sA.erase(sA.begin());
				cout << "777" << endl;  

				std::vector<std::string>::size_type size = -1;
				cout << " size=  "<< size << endl;
			
			}break;
			case 2:
			{
				int* p = new int();
				int* p1 = new int;
				cout << "p = " << *p << "p1 = " << *p1 << endl;
				delete p, p1;

				A tmp =  func(2);
				cout << "line " << __LINE__ << endl;
			}
			case 3:
			{
				// need to tell the size.
				std::cout << "How long do you want the string? ";
				int size{ 0 };
				std::cin >> size;
				char* input = new char[size + 1]();
				std::cin.ignore();
				std::cout << "input the string: ";
				std::cin.get(input, size + 1);
				std::cout << input;
				delete[] input;
			}break;
			case 4:
			{
				cout <<  " sizeof(std::string)" << sizeof(string) << endl;

				allocator<string> p;
				string* ps = p.allocate(6);
				p.construct(ps, "are");
				p.construct(++ps,"you");
				cout << (*(--ps)).c_str() << endl;
				cout << (*(++ps)).c_str() << endl;
				p.destroy(ps); p.destroy(--ps);
				p.deallocate(ps,6);
			}

		}
	}
	~Dynamic() {
		cout << "in Dynamic disconstruct " << endl;
	}
};