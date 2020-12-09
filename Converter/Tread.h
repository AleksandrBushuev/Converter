#pragma once

class Tread
{
	int one;
	int two;
	int three;

public:
	
	Tread();
	Tread(int, int, int);

	int getOne();
	int getTwo();
	int getThree();

	void setOne(int);
	void setTwo(int);
	void setThree(int);

	bool operator == (const Tread&)const;
	bool operator<(const Tread&)const;
	bool operator>(const Tread&);

	~Tread();
};