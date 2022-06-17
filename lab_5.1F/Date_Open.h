#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class Date_Open : public Triad
{
public:
	Date_Open();
	Date_Open(int, int, int);
	Date_Open(const Date_Open&);

	friend bool operator > (Date_Open&, Date_Open&);
	friend bool operator < (Date_Open&, Date_Open&);
};

