#pragma once
#include "stdafx.h"
namespace s1
{
class  Person
{
	friend istream& read(istream& is, Person& p);
	friend ostream& print(ostream& os, const Person& p);
public:
	Person(const string& name_, const string& addr_) {
		name = name_;
		addr = addr_;
	}
	//Person() = default;
	string GetName() {
		return name;
	}
	string GetAddr()const {
		return addr;
	}
private:
	string name;
	string addr;
};


istream& read(istream& is, Person& p)
{
	is >> p.name >> p.addr;
	return is;
}
ostream& print(ostream& os, const Person& p)
{
	os << p.name << p.addr;
	return os;
}
}

//=======================
namespace s2 {
	string cursor("tet");
	//class screen;
	////class	Window_mgr {
	////public:
	////	void clear(screen& s);
	////};
	typedef	double  pos;
	class screen
	{
		//friend void Window_mgr::clear(screen&);
	public:


		screen() = default;
		screen(pos ht, pos wd, char c) :height(ht), width(wd) ,contents(ht*wd,c), cursor(1){  cout << cursor << endl; };
		
		screen& set(char cha);
		pos set(pos r, pos col, char ch) {
			contents[r * width + col] = ch;
			return cursor;
		}
		typedef  string::size_type   pos;
		char get()const { return contents[cursor]; }
		char get(pos r, pos c) const { return contents[r * width + c]; }

		screen& move(pos r, pos col);
		void display(ostream& os)const;
	public:
		const pos  cursor = 0;
		pos height = 0, width = 0;
		string  contents;
	};

	//void Window_mgr::clear(screen& s)
	//{
	//	s.contents.clear();
	//	s.cursor = 0;
	//	s.width = 0;
	//	s.height = 0;
	//}



	screen& screen::set(char cha) {
		contents[cursor] = cha;
		return *this;

	}



	void  screen::display(ostream& os)const {
		os << contents << endl;
	}
}
//==============
namespace s3{
	class Y;
	class X {
	private:
		class Y *py;
	};
	class Y {
		class X x;
	};
}

class ChapterSeven
{
public:
	ChapterSeven(int a) {
		switch (a)
		{
		case 1:
		{
			// const s1::Person p1("john","los angles");
			//cout << p1.GetAddr();
			////read(cin, p1);
			////print(cout,p1);

			//const s2::screen v1;
			//v1.get();
			cout << "case 1 " << endl;

		}
		break;
		case 2:
		{
			cout << "case 2 " << endl;
		}
		break;
		default:
			break;
		}
	}
	ChapterSeven(double d) :ChapterSeven((int)d) { cout << d << endl; };
	ChapterSeven(float f) :ChapterSeven((int)f) { cout << f << endl; };

};






