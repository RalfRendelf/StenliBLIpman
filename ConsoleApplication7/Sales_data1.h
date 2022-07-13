#pragma once
#include<iostream>
#include <vector>
using namespace std;
class Sales_data
{
	friend istream& read(istream& s, Sales_data& object);
	friend ostream& write(ostream& s, Sales_data& object);
	friend Sales_data add();
public :
	Sales_data() = default;
	Sales_data(const string &s,unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(const string &s):bookNo(s){}
	Sales_data(istream&);
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	inline double avg_price() const {
		return units_sold ? revenue / units_sold : 0;
	}
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data&d)
{
	Sales_data f = d;
	return f;
}
istream& read(istream& s, Sales_data& object)
{
	double price = 0;
	s >> object.bookNo >> object.units_sold >> price;
	object.revenue = price * object.units_sold;
	return s;
}
ostream& write(ostream& s, Sales_data& object)
{
	s << object.bookNo << object.revenue;
	return s;
}
