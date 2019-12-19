#pragma once
#include <iostream>
#include <memory>
#include <set>
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
			
			}break;
			case 2:
			{

			}
		}
	}
	~Dynamic() {
		cout << "in Dynamic disconstruct " << endl;
	}
};