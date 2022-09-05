#pragma once
#include "Screen.h"
#include <string>
#include <stack>
#include <list>
#include <algorithm>
#include <set>
#include <math.h>
#include <numeric>

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
string reverse(string const& s)
{
	string rev(s.rbegin(), s.rend());
	return rev;
}

void stackchek()
{
	stack<char> f;
	string g = "1234567890()+-*/", g1 = "1234567890";
	char c;
	while(cin>>c)
	{
		if (g.find_first_of(c) != string::npos)
		{
			f.push(c);
		}
	}
	
	string f1;
	bool pr = 0;
	while (!f.empty())
	{
		if (f.top() == ')')
		{
			pr = 1;}
		if (pr) {
			if (f.top() == '(') pr = 0;
			f1.push_back(f.top());
			}
		f.pop();
	}
	
	f1 = reverse(f1);
	cout << f1;
	
	
	
}
void upr106()
{
	vector<int> g{ 1,2,3,4,5,6,7 };
	fill_n(g.begin(), g.size(), 1);
	for (auto a : g)
		cout << a;
	list<int> f;
 
}
void upr107a()
{
	vector<int> vec;
	list<int> lst; 
	int i;
	while (cin >> i)
		lst.push_back(i);
	system("pause");
	auto it = back_inserter(vec);
	copy(lst.begin(), lst.end(), it);
	for (auto a: vec)
	{
		cout << a;
	}
}
void upr107b()
{
	vector<int> vec;
	vec.reserve(10);
	auto it = back_inserter(vec);
	fill_n(it,10, 0);
	
	for (auto a : vec)

		cout << a;
}
//class Solution {
//public:
//	int countDifferentSubsequenceGCDs(vector<int>& nums) {
//		int max = 0;
//
//		bitset<200001> bs;
//		for (int i : nums) {
//			max = std::max(i, max);
//			bs.set(i);
//		}
//
//
//		for (int i = 1; i <= max; i++) {
//			int gcd = 0;
//			for (int j = i; j <= max; j += i) {
//				if (bs.test(j)) {
//					gcd = std::gcd(j, gcd);
//				}
//			}
//			if (gcd == i) {
//				m_gcds.insert(gcd);
//			}
//		}
//
//		return m_gcds.size();
//	}
//
//private:
//	std::set<int> m_gcds;
//};
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution1 {
public:
	void helper(TreeNode* root, vector<vector<double>>& alvec,int lvl)
	{
		vector<double> val;
		if (alvec.size() < lvl)
			alvec.push_back(val);
		alvec[lvl-1].push_back(root->val);
		if (root->left != NULL)
			helper(root->left, alvec, lvl + 1);
		if (root->right != NULL)
			helper(root->right, alvec, lvl + 1);

	
	}
	vector<double> helper(vector<vector<double>>& alvec)
	{
		vector<double> vec;
		int i;
		for (auto& a : alvec)
		{
			i = accumulate(a.begin(), a.end(),-5000000000);
			vec.push_back(i / a.size());

		}
		return vec;

}
	
	vector<double> averageOfLevels(TreeNode* root) {
		vector<vector<double>> valof;
	helper(root, valof, 1);
		return helper(valof);
	}
};