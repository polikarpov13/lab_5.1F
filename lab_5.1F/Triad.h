#pragma once
#include <string>
#include <iostream>

using namespace std;

class Triad
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

	Triad();
	Triad(const int f, const int s, const int t);
	Triad(const Triad& T);
	~Triad(void);

	Triad& operator = (const Triad& T);

	operator string () const;

	friend ostream& operator << (ostream& out, const Triad& t);
	friend istream& operator >> (istream& in, Triad& t);

};