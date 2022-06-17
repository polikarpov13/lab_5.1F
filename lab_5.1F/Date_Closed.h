#pragma once
#include <string>
#include <iostream>
#include "Triad.h"

using namespace std;
class Date_Closed : private Triad
{
private:
	int first, second, third;
public:
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	void setFirst(int f) { this->first = f; }
	void setSecond(int s) { this->second = s; }
	void setThird(int t) { this->third = t; }

	Date_Closed();
	Date_Closed(const int f, const int s, const int t);
	Date_Closed(const Date_Closed& T);
	~Date_Closed(void);

	Date_Closed& operator = (const Date_Closed& T);

	friend bool operator > (Date_Closed&, Date_Closed&);
	friend bool operator < (Date_Closed&, Date_Closed&);

	friend ostream& operator << (ostream& out, const Date_Closed& t);
	friend istream& operator >> (istream& in, Date_Closed& t);
	operator string () const;
};

