#include "Date_Open.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Date_Open::Date_Open() : Triad()
{ }

Date_Open::Date_Open(int f, int s, int t) : Triad(f, s, t)
{ }

Date_Open::Date_Open(const Date_Open& d) : Triad(d)
{ }

bool operator > (Date_Open& d1, Date_Open& d2) {
	return (d1.getFirst() > d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() > d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() > d2.getThird());
}
bool operator < (Date_Open& d1, Date_Open& d2) {
	return (d1.getFirst() < d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() < d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() < d2.getThird());
}


