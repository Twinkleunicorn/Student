#pragma once
#include<iostream>
#include<string>
#include"vectors_.h"

using namespace std;

class student
{
	string name;
	int group;
	vectors_ grades;
public:

	student(string name = "Petya", int group = 1);
	void setName(string s);
	void setGroup(int x);
	void setGrades(int size);
	string getName()const;
	int getGroup()const;
	void getGrades()const;
	void addMark(int x);

};

ostream& operator<<(ostream& os, const student& obj);
istream& operator>>(istream& is, student&obj);

