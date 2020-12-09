#include "ArrayBinary.h"

using namespace std;

/// <summary>
/// Класс бинарного массива
/// </summary>
ArrayBinary::ArrayBinary()
{
}
/// <summary>
/// Класс бинарного массива
/// </summary>
/// <param name="array"> Указать на массив</param>
/// <param name="arrayLength">Длина массива</param>
ArrayBinary::ArrayBinary(int* array, int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
	{
		int temp = array[i];

		if (isValueBinary(temp)) {
			_arr.push_back(temp);
		}
		else
		{
			throw exception("Число не является бинарным!!!");
		}

	}
}

void ArrayBinary::Add(int value)
{
	if (isValueBinary(value)) {
		_arr.push_back(value);
	}
	else
	{
		throw exception("Число не является бинарным!!!");
	}
}


int ArrayBinary::GetLengtch()
{
	return _arr.size();
}

vector<Tread> ArrayBinary::GetTreads()
{
	vector<int> arr = correct();

	int temp = 0;
	int count = 0;
	int index = -1;
	vector<Tread> treads;
	
	for (vector<int>::iterator iter = arr.begin(); iter != arr.end(); iter++)
	{

		if (count % 3==0) {
			Tread tread;
			treads.push_back(tread);
			index++;
		}
		temp++;
		count++;

		if (temp / 1 == 1) {
			treads[index].setOne(*iter);
			int exit = count + 1;
			if (exit == GetLengtch()) {
				treads[index].setTwo(0);
				treads[index].setThree(0);
			}

		}
		if (temp % 2 == 0) {
			treads[index].setTwo(*iter);

			int exit = count + 1;
			if (exit == GetLengtch()) {
				treads[index].setThree(0);
			}

		}
		if (temp % 3 == 0) {
			treads[index].setThree(*iter);
			temp = 0;
		}
	}

	return treads;
}

ArrayBinary::~ArrayBinary()
{
}

bool ArrayBinary::isValueBinary(int value)
{
	bool result = false;

	int temp = value % 10;

	if (temp == 0 || temp == 1) {
		result = true;
	}
	else {
		result = false;
	}
	return result;
}

vector<int> ArrayBinary::correct()
{
	vector<int> arr = _arr;

	while (arr.size() % 3 != 0) {
		arr.insert(arr.begin(), 0);
	}
	return arr;
}

