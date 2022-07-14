#include "Screen.h"



Screen::Screen()
{
	cout << "constructor";
}


char Screen::get(pos hs, pos wd)
{
	pos row = hs * width;
	return contest[row + wd];
}
void Screen::some_member()const
{
	++access_ctr;
}
Screen& Screen::set(char c)
{
	contest[cursor] = c;
	return *this;
}
Screen& Screen::set(pos a, pos b, char c)
{
	contest[a * width + b] = c;
	return *this;
}
//void Window_mgr::clear(ScreenIndex i)
//{
//	Screen& s = screens[i];
//	s.contest = string(s.height * s.width, ' ');
//}