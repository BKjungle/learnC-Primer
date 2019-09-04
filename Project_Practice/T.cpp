#include "T.h"
#include "ChapterThree.h"
#include "ChapterFour.h"
#include "ChapterFive.h"
#include "ChapterSix.h"
#include "ChapterSeven.h"
// ¿ªÊ¼

class  NoDe {
public:
	NoDe(int a = 1) :sss(a) {};
	int sss;
};

class C {
public:
	 C(string str) {};
	void add( const C& cr) {};
	NoDe  cn;
};

struct Data {
	int ival;
	std::string s;
};

int main()
{

	//std::cout << "begin------------------------> ~" << std::endl;
	
	//new ChapterThree(3);
	//new ChapterFour(11);
	//new ChapterFive(4);
	//new ChapterSix(3);
//	ChapterSeven T1((float)1);
//	ChapterSeven T2((double)2);

	show();
	C c1("sss");

	string st("aaa");
	C c2 = st;
	c1.add(st);


	std::cout << std::boolalpha;
	std::cout << std::is_literal_type<Data>::value << std::endl;
	return EXIT_SUCCESS;
}