#pragma once
#include "stdafx.h"
#include <numeric>
#include <iterator>

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
			cout << "v1 accumulate = " << accumulate(v1.cbegin(), v1.cend(), 0) << endl;

			vector<double> v2 = { 1.2,2.3,3.4,4.5,5.66 };
			cout << "v2 accumulate = " << accumulate(v1.cbegin(), v1.cend(), 0) << endl;

			auto itr = back_inserter(v2);
			fill_n(itr, 7, 7);
			pr<vector<double>>(v2, 0);
			
			vector<int> v3;
			

		}break;
		default:
			break;
		}
	}
};
