#include "Converter.h"
#include <vector>
#include <map>


using namespace std;


Converter::Converter()
{
}


Converter::~Converter()
{
}
/// <summary>
/// Конвертировать из двоичной системы счисления в восьмеричную 
/// </summary>
/// <param name="number_2">Шестиразрядное двоичное число</param>
/// <returns></returns>
int Converter::convert2To8(ArrayBinary arr){
	vector<Tread> treads = arr.GetTreads();
	return replace(treads);
}




int Converter::replace(vector<Tread> treads)
{		
	multimap< Tread, int> comparisonTable{
		{Tread(0, 0, 0), 0 },
		{ Tread(0,0,1),1 },
		{ Tread(0,1,0),2 },
		{ Tread(0,1,1),3 },
		{ Tread(1,0,0),4 },
		{ Tread(1,0,1),5 },
		{ Tread(1,1,0),6 },
		{ Tread(1,1,1),7 }
	};

	vector<int> arrResult;	

	for (vector<Tread>::iterator iter=treads.begin(); iter !=treads.end(); ++iter)
	{
		int result = compare(comparisonTable, *iter);
		arrResult.push_back(result);
	}
	return concat(arrResult);
}

int Converter::compare(multimap<Tread, int> table, Tread tread)
{	
	int result = 0;
	multimap <Tread, int> ::iterator iter;

	for (iter=table.begin();iter!=table.end(); ++iter)
	{
		Tread cur = iter->first;
		if (cur == tread) {
			result = iter->second;
		}

	}
	return result;
}
       
int Converter::concat(vector<int> arr)
{
	int result=0;
	int count = 1;
	for (int i = arr.size()-1;i >=0; i--)
	{
		result += arr[i] * count;		
		count=count*10;
	}
	return result;
}