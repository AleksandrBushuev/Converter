#include "Tread.h"

using namespace std;


Tread::Tread()
{
}

Tread::Tread(int one, int two, int three)
{
	this->one = one;
	this->two = two;
	this->three = three;
}

int Tread::getOne()
{
	return one;
}

int Tread::getTwo()
{
	return two;
}

int Tread::getThree()
{
	return three;
}

void Tread::setOne(int value)
{
	this->one = value;
}

void Tread::setTwo(int value)
{
	this->two = value;
}

void Tread::setThree(int value)
{
	this->three = value;
}

bool Tread::operator==(const Tread &tread)const
{
	bool result = false;
	if (this->one == tread.one && this->two == tread.two && this->three == tread.three)
	{
		result = true;
	}
	return result; 
}

bool Tread::operator<(const Tread& tread) const
{
	return (this->one <tread.one) && (this->two<tread.two)&&(this->three<tread.three);
}

bool Tread::operator>(const Tread & tread)
{
	return (this->one > tread.one) && (this->two > tread.two) && (this->three > tread.three);
}

Tread::~Tread()
{
}