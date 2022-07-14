#pragma once
#include<iostream>
#include <vector>
using namespace std;
//extern ostream& storeOn(ostream&, Screen&);
//extern BitMap& storeOn(BitMap&);
class Screen
{
public:
using pos = string::size_type;
	Screen();
	Screen& set(char);
	Screen& set(pos, pos, char);
	friend class Window_mgr;
	
	
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contest(ht* wd, c){}
	char get() const { return contest[cursor]; }
	 char get(pos hs, pos wd);
	 inline Screen& move(pos r, pos c);
	 Screen& display(ostream& os)
	 {
		 do_display(os);
		 return *this;
	 }
	 const Screen& display(ostream& os) const
	 {
		 do_display(os); 
		 return *this;
	 }
public:
	void some_member() const;
private:
	inline void do_display(ostream &os) const
	{
		os << contest;
	}
	mutable size_t access_ctr = 0;
	pos cursor = 0;
	pos height = 0, width = 0;
	string contest;

};
class Window_mgr
{
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex i)
	{
		Screen& s = screens[i];
		s.contest = string(s.height * s.width, ' ');

		
	}
private:
	vector<Screen> screens{ Screen(24,80,' ') };

};

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
