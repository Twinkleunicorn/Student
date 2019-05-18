#include "student.h"



student::student(string name, int group)
{
	this->name = name;
	this->group = group;
}

void student::setName(string s)
{
	this->name = s;
}


void student::setGroup(int x)
{
	this->group = x;
}

void student::setGrades(int size)
{
	vectors_ obj(size);
	for (size_t i = 0; i < size; i++)
	{
		int h;
		cout << "Grade" << endl;
		cin >> h;
		obj.setElement(h, i);
	}
	grades = obj;
}

string student::getName()const
{
	return name;
}

int student::getGroup()const
{
	return this->group;
}

void student::getGrades()const
{
	cout << grades << endl;
}

void student::addMark(int x)
{
	grades.pushBack(x);
}

ostream & operator<<(ostream& os, const student & obj)
{
	os << obj.getName() << " group:" << obj.getGroup() << " Grades:";
	obj.getGrades();
	return os;
}

istream & operator>>(istream& is, student & obj)
{
	string name;
	is >> name;
	obj.setName(name);
	int group;
	cin >> group;
	obj.setGroup(group);
	cout << "How many grade?" << endl;
	cin >> group;
	obj.setGrades(group);


	return is;
}