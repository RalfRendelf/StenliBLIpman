#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;


class Sales_data
{private:
	struct SD{string bookNo;
	int units_sold = 0;
	double revenue = 0.0, price = 0;};
public:
	void ISBN();
private: 
	inline SD book();
};

inline Sales_data::SD Sales_data::book()
{
	//Sales_data Bk;
	SD Bk;
	
	cout << "Enter book name\n";
	cin >> Bk.bookNo;
	cout << "Enter the number of copies sold:\n";
	cin >> Bk.units_sold;
	cout << "Enter price per book:\n";
	cin >> Bk.price;
	Bk.revenue = Bk.price * Bk.units_sold;
	return Bk;
}
void Sales_data::ISBN()
{
	vector<SD> Books;
	bool C = 1;
	bool flag = 1, strelka = 1;
	Books.push_back(book());
	system("cls");
	while (C)
	{
		

		cout << "Continue?\n";
		if (strelka)
		{
			cout << "=>Yes\n" << "No\n";
		}
		else
		{
			cout << "Yes\n" << "=>No\n";
		}

		
		switch (_getch())
		{case 80:
			system("cls");
			strelka = 0;
			break;
		case 72:
			system("cls");
			strelka = 1;
			break;
		case 13:
			if (!strelka)
			{
				C = 0;
			}
			else
			{system("cls");
				flag = 1;
				SD g;
				g = book();
				for (auto& a : Books)
				{
					if (a.bookNo == g.bookNo)
					{
						flag = 0;
						a.units_sold += g.units_sold;
						a.revenue += g.revenue;

					}
				}
				if (flag)
				{
					Books.push_back(g);
				}

			}
			break;
		default:
			break;
		}
		
	}
	for (auto& a : Books)
	{
		cout << "Book number " << a.bookNo << "\tSold " << a.units_sold << "\tvalue " << a.revenue<<'\n';
		system("pause");
	}


}