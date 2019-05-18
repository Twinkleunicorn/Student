#pragma once
#include<iostream>

using namespace std;
class vectors_
{
	int* arr;
	int size;
public:
	vectors_();
	vectors_(int size, int value = 0);
	vectors_(const vectors_ & obj);
	~vectors_();
	void clear();
	int getSize();
	int getElement(int x);
	void setElement(int x, int i);
	void pushBack(int z);
	void print()const;
	vectors_& operator=(const vectors_ &obj);
	vectors_& operator++();
	vectors_ operator++(int);
	vectors_& operator--();
	vectors_ operator--(int);
};

ostream& operator<<(ostream& os, const vectors_& obj);
istream& operator>>(istream& is, vectors_& obj);


