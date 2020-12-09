#pragma once
#include <vector>
#include "Tread.h"

using namespace std;

class ArrayBinary
{
	vector<int> _arr;

public:

	ArrayBinary();
	

	ArrayBinary(int*, int);

	void Add(int);	

	int GetLengtch();

	vector<Tread> GetTreads();

	~ArrayBinary();

private:
	bool isValueBinary(int);
	
	vector<int> correct();

};