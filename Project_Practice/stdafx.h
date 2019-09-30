#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list> 
#include <deque>
#include <set>
#include <array>
#include <forward_list>

#include <stack>
#include <algorithm>
using namespace std;



template<typename T>
void	
pr(T& arg,bool is_n) 
{
	for (auto& ar : arg) {
		cout << ar << (is_n?"\n" : "-" );
	}
}
