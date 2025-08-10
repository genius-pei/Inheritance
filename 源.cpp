#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:


	void identity()
	{
		cout << "void identity()" << _name << endl;

	}
protected:
	string _name = "LIHUA";
	string _address;
	string _tel;
	int _age = 18;

};
class Student :public Person
{
public:
	void studing()
	{

	}


protected:
	int _stuid;//Ñ§ºÅ
};
class Teacher :public Person
{
public:
	void teaching()
	{

	}
protected:
	string _title;
};
int main()
{
	Student s1;
	Teacher t1;
	s1.identity();
	t1.identity();
}