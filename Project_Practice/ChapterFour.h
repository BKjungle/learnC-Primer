#pragma once
#include "stdafx.h"


class ChapterFour
{
public:
	ChapterFour() {
		string s("some string");
		if (s.begin() != s.end())
		{
			auto it = s.begin();
			*it = toupper(*it);
		}

		cout << s << endl;

		for (auto it = s.begin(); it != s.end(); ++it)
		{
			*it = toupper(*it);
		}
		cout << s << endl;
	}

};
