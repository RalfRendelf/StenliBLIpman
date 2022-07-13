#pragma once
#include<iostream>
#include <vector>
using namespace std;
class Screen
{
public:
using pos = string::size_type;
	Screen();
	Screen& set(char);
	Screen& set(pos, pos, char);
	
	//typedef string::size_type pos;
	
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contest(ht* wd, c){}
	char get() const { return contest[cursor]; }
	 char get(pos hs, pos wd);
	inline Screen& move(pos r, pos c)
	/*{
			pos row = r * width;
			cursor = row + c;
			return *this;
		}*/;
public:
	void some_member() const;
private:
	mutable size_t access_ctr = 0;
	pos cursor = 0;
	pos height = 0, width = 0;
	string contest;

};
class Window_mgr
{
private:
	vector<Screen> screens{ Screen(24,80,' ') };

};

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}