#pragma once
#include "stdafx.h"
#include <fstream>
#include <sstream>

class ChapterEight
{
public:
	ChapterEight() {
		//ofstream sf("C:/Users/admin/source/repos/Project_Practice/Debug/nnn.txt", ofstream::app);
		//std::string buf;
		////while (cin >> buf)
		////	std::cout << buf << std::endl;
		///*sf.clear();*/
		////if (sf.eof())
		////	cout << "eof !!!" << endl;
		//sf << "fs";
		//sf << "go" << flush;
		//system("pause");
		//sf << "\r\n";
		string line;
		string name;
		string word;
		vector<string> num;
		while (getline(cin, line)) {	
			istringstream is(line);
			is >> name;
			while (is >> word)
				num.push_back(word);
		}

		cout << "name" << endl;
		for (auto a : num) {
			cout << a << endl;
		}
	}
};
