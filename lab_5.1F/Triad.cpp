#include "Triad.h"
#include <sstream>
#include <iostream> 

using namespace std;

Triad::Triad() : first(0), second(0), third(0)
{}

Triad::Triad(int first, int second, int third) {
	this->first = first;
	this->second = second;
	this->third = third;
}

Triad::Triad(const Triad& T) : first(T.first), second(T.second), third(T.third)
{}

Triad::~Triad(void)
{
}

Triad& Triad::operator = (const Triad& T) {
	this->first = T.first;
	this->second = T.second;
	this->third = T.third;

	return *this;
}

ostream& operator << (ostream& out, const Triad& t) {
	out << string(t);
	return out;
}

istream& operator >> (istream& in, Triad& T) {
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

Triad::operator string() const {
	stringstream ss;
	ss << endl;
	ss << first << endl;
	ss << second << endl;
	ss << third << endl;

	return ss.str();
}
