#include "Screen.h"



Screen::Screen()
{
	cout << "constructor";
}

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
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
inline Screen& Screen::set(char c)
{
	contest[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos a, pos b, char c)
{
	contest[a * width + b] = c;
	return *this;
}