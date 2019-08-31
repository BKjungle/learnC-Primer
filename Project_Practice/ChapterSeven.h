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



class screen
{
public: 
	typedef  string::size_type   pos;

	screen() = default;
	screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht*wd,c) {

	}
	screen& set(char cha) ;
	screen& set(pos r, pos col, char ch);
	char get()const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r * width + c]; }
private:
	pos  cursor = 0;
	pos height = 0, width = 0;
	string  contents;	
};	

inline screen& screen::set(char cha) {
	contents[cursor] = cha;
	return *this;

}

inline screen& screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}

class ChapterSeven
{
public:
	ChapterSeven(int a) {
		switch (a)
		{
		case 1:
		{
			 const s1::Person p1("john","los angles");
			cout << p1.GetAddr();
			//read(cin, p1);
			//print(cout,p1);

			const screen v1;
			v1.get();

		}
		break;
		default:
			break;
		}
	}
};






