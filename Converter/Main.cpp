#include "Converter.h"
#include <iostream>
#include <string>

using namespace std;


bool test() {
	bool result;	
	int output = 15;
	Converter converter;
	ArrayBinary input;	
	input.Add(0);
	input.Add(1);
	input.Add(1);
	input.Add(0);
	input.Add(1);	
	
	int val = converter.convert2To8(input);

	(val == output) ? result = true : result = false;
	return result;
}


int main() {
	setlocale(LC_ALL, "Russian");
	if (test())
	{
		cout << "Test success!" << endl;
	}
	else 
	{
		cout << "Test failed!" << endl;
	}

	
	char input = 'y';
	
	while(input=='y') {
		Converter converter;
		string number;
		cout << "Введите двоичное число: " << endl;
		cin >> number;

		int len = number.length();
		
		int* arr = new int[len];

		for (int  i = 0; i < len; i++)
		{
			char str = number[i];
			arr[i] = str-'0';
		}
		try {
			ArrayBinary binary(arr, len);
			cout << "Восьмеричное число: " << converter.convert2To8(binary) << endl;
		}
		catch (exception ex) {
			cout << ex.what() << endl;
		}
		
		
		delete[]arr;

		cout << "Продолжить? y/n " << endl;
		cin >> input;

	}

	



	
	
	
}

