#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list> 
#include <deque>
#include <array>
#include <forward_list>

#include <algorithm>
using namespace std;


template<typename T>
void	
pr(T const& arg,bool is_n) 
{
	for (auto& ar : arg) {
		cout << ar << (is_n?"\n" : "-" );
	}

	cout << "-------  once  pr ---------" << endl;
}
