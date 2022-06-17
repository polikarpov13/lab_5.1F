#include "Date_Closed.h"
#include <sstream>
#include <iostream> 

using namespace std;

Date_Closed::Date_Closed() : first(0), second(0), third(0)
{}

Date_Closed::Date_Closed(int first, int second, int third) : first(first), second(second), third(third)
{}

Date_Closed::Date_Closed(const Date_Closed& T) : first(T.first), second(T.second), third(T.third)
{}

Date_Closed::~Date_Closed(void)
{
}

bool operator > (Date_Closed& d1, Date_Closed& d2) {
	return (d1.getFirst() > d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() > d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() > d2.getThird());
}
bool operator < (Date_Closed& d1, Date_Closed& d2) {
	return (d1.getFirst() < d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() < d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() < d2.getThird());
}

Date_Closed& Date_Closed::operator = (const Date_Closed& T) {
	this->first = T.first;
	this->second = T.second;
	this->third = T.third;

	return *this;
}

Date_Closed::operator string() const
{
	stringstream ss;
	ss << endl;
	ss << first << endl;
	ss << second << endl;
	ss << third << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Date_Closed& t) {
	out << string(t);
	return out;
}

istream& operator >> (istream& in, Date_Closed& T) {
	int f, s, t;
	cout << endl;
	cout << "First : "; in >> f;
	cout << "Second : "; in >> s;
	cout << "Third : "; in >> t;

	T.setFirst(f);
	T.setSecond(s);
	T.setThird(t);

	return in;
}
