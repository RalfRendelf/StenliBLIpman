#pragma once
#include "Screen.h"
#include <string>




class X
{
	int i;
	int j;
public:
	X(int val) :j(val), i(j){};
};
class Y
{
	int f = 1;
	X d;
	
};
X f(12);
void upr947()
{
	string g("ab2c3d7R4E6"),g1 = g;
	string s("0123456789");
	bool check = true;
	int cnt = 0;
	vector<int> stat;
	while (check)
	{
		int i;
		
		if (g1.find_first_of(s) == string::npos)
		{
			check = 0;
		}
		else
		{
		
		i = g1.find_first_of(s);
		g1.erase(g1.begin() + i);
		stat.push_back(i + cnt++);
		
		}

	}
	//cout << g1;
	for (auto i : stat)
	{
		cout << i << " ";
	}
}
void upr947a()
{
	string g("ab2c3d7R4E6"), g1 = g;
	string s("0123456789");
	bool check = true;
	int cnt = 0;
	vector<int> nums, symbols;
	while (check)
	{
		int i;

		if (g1.find_first_not_of(s) == string::npos)
		{
			check = 0;
		}
		else
		{

			i = g1.find_first_not_of(s);
			g1.erase(g1.begin() + i);
			symbols.push_back(i + cnt++);

		}

	}
	cout << g1 << '\n';
	for (auto i : symbols)
	{
		cout << i << " ";
	}
}
