#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "ArrayBinary.h"

using namespace std;


class Converter{
	
	
public:
	Converter();
	~Converter();

	int convert2To8(ArrayBinary);

private: 	
	
	int replace(vector<Tread>);
	int compare(multimap<Tread, int>, Tread);
	int concat(vector<int>);
};


