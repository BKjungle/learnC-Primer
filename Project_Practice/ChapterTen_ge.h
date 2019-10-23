#pragma once
#include "stdafx.h"


class Genetic
{
public:
	Genetic(int a) {
		
		 switch (a)
		{
		case 1:
		{
			vector<int> v1 = { 1,2,3,4,5 };
			auto ret = find(begin(v1), end(v1), 4);
			cout << "ret = " << *ret << endl;

			auto Cret = count(begin(v1), end(v1), 5);
			cout << "Cret = " << Cret  << v1.begin()._Unwrapped() << endl;
		}break;
		default:
			break;
		}
	}
};
